Vue.component 'zk-ul-comp', {
  props: ['ulData']
  template: 
    '<ul class="nav nav-pills nav-stacked">
      <li class="active">
        <a style="cursor:default" href="##">{{ulData.title}}</a>
      </li>
      <li v-for="row in ulData.contentArr">
        <a href={{row.url}} target="_blank">
          {{row.title}}
          <template v-if="row.memo">
            <br>
            {{row.memo}}
          </template>
        </a>
      </li>
    </ul>'
}

new Vue(
  el: '#app'
  data: 
    project: 
      title: 'My Project'
      contentArr: [
        {
          url: 'https://github.com/zhaokang555/shanbay-chrome-extension-using-jquery'
          title: 'shanbay-chrome-extension-using-jquery'
          memo: '(Chrome插件: 自动查询选中单词的释义和发音)'
        }
        {
          url: 'https://github.com/zhaokang555/ShanbayChromeExtension' 
          title: 'shanbay-chrome-extension'
          memo: '(Chrome插件: 自动查询选中单词的释义和发音)'
        }
        {
          url: './TileMap/index.html' 
          title: 'tile-map (瓦片图)'
        }
        {
          url: './Panorama/index.html'
          title: 'panorama (全景图) (Responsive)'
        }
        {
          url: './StockQuery/index.html'
          title: 'stock-query (股票查询)'
        }
        {
          url: 'https://github.com/zhaokang555/QTDrawingTool'
          title: 'qt-drawing-tool'
          memo: ' (A drawing tool using C++/QT. 一个类似win上mspaint的画图程序)'
        }
        {
          url: 'https://github.com/zhaokang555/iOSDemo-Rock-Scissors-Paper'
          title: 'rock-scissors-paper'
          memo: '(A iOS demo of a small game: Rock-Scissors-Paper. 一个iOS的小游戏：石头剪刀布)'
        }
      ]

    resume: 
      title: 'My Resume'
      contentArr: [
        {
          url: './Resume/qqmail.pdf'
          title: 'My Resume (QQ Mail)'
        }
        {
          url: './Resume/163mail.pdf'
          title: 'My Resume (163 Mail)'
        }
      ]
  
    others: 
      title: 'Others'
      contentArr: [
        {
          url: 'http://www.cnblogs.com/forzhaokang/'
          title: 'My Tech Blog'
        }
        {
          url: 'https://github.com/zhaokang555'
          title: 'My GitHub'
        }
        {
          url: 'http://weibo.com/u/2301108991'
          title: 'My Weibo'
        }
        {
          url: 'https://www.zhihu.com/people/zhao-kang-11'
          title: 'My Zhihu aaaaaa'
        }
      ]
)
  

