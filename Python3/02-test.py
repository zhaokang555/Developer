def consumer():
    r = 'start'
    while True:
        # 每次执行都是返回yield关键字后面的表达式的值，
        # 但这里n的值并不是r，n的值是当控制权交回来的时候send()内传回来的值
        n = yield r 
        if not n:
            return
        print('[消费者] 消费产品编号为： %s' % n)
        r = '200 ok'


def produce(c):
     # 这里send（）表示将括号内的值作为上一次yield表达式的返回值，因为对于yield语句本身来说，是没有
     # 返回值的或者返回值为None，因此 n = yield r 这样的表达式
     # 就变成 了 n = None了
     #表示我交回控制权的时候带个值回去
    # 表示执行下一段的时候用到这个值，但是第一次执行生成器的时候并不需要传入什么值，因此发个空
    #消息，这里类似js的generator中的next(value)表示执行下一段逻辑的时候带个返回值回去，否则就yield本身
    # 来说他并没有返回值或者说返回值是None（undefined）
    a = c.send(None)  

    print('[启动] 启动阶段返回值：%s' % a)
    n = 0
    while n < 5:
        n += 1
        print('[生产者] 生产产品编号为: %s' % n)  # 生产第n个产品
        r = c.send(n)  # 生产产品之后交回执行权，并且返回结果r表明了下一次yield的返回值
        print('[生产者] 消费者消费情况反馈 :%s' % r)
    c.close() # 需要额外的手动关闭


c = consumer()
produce(c)