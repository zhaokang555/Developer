gcount = 0

def global_test():
    print (gcount)
    
def global_counter():
    global gcount
    gcount +=1
    return gcount
    
def global_counter_test():
    print(global_counter())
    print(global_counter())
    print(global_counter())

global_test()
global_counter_test()