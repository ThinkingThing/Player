## Player
With PDF
With Download

 根目录运行  pod install
 
 liziEN

### 背景：
根据一套英语课程定制的播放器
https://www.zhihu.com/question/30666965

#### Bug（P1）
播放记录的问题。现在是数据库。
是否序列化为json，规划mongodb
是否是因为流播放的问题?
重构数据结构。
算法：根据播放结束事件，出发数据库插入。（播放时间为85%）
取舍：快进倒推 && 摇一摇手机倒退3秒（按钮倒退）


#### 生成学习结果报告：诸葛io 用户行为分析 （P2）
http://sql.zhugeio.com:9032/#/notebook/2CRBP6QN2?app_id=41987

#### 和微信的集成。（P2）
https://github.com/HuaweiDevops/bot
https://github.com/Chatie/wechaty
动态通知群
某某学员，学习了5分钟。（学习了一小时）

#### 动态歌词播放（P3）
pdf现在展示不清楚。


#### web h5 （P3）
支持手机浏览器传播及朋友圈学习记录展示。


### 目录结构
~Download      下载mp3    
Enesco.xcodeproj   
EnescoTests        测试
~PlayToday           IOS快捷导航
Podfile.lock         删除
README copy.md
Enesco                豆瓣音乐播放器框架
	~Helper   播放重构和帮助类 （王杰重构）

	~DatabaseModels 数据库实体
	~DALHelper 数据库操作逻辑
	~DAL sqllite 操作类（三方）
        Database   数据库

	Thirdparty 流播放
			DOUAudioStreamer
			NAKPlaybackIndicatorView
	Entities 音乐实体（废弃？）
	Macros 宏命令 screen的常量定义
	Categories Dou项目对NSString 扩展  
	Handlers dou项目

         Controllers界面 logic（重要）
		~Music （播放器UI logic）
-(void)didFinishPlaying
		~process 学习摘要
		~login 登陆
		~Userinfo_no 废弃
		~MusicListWithSection 课程列表 （section课程 && 锁LOCK）
		MusicList （Dou项目）
	
Resources MP3 字体及图片所在目录
	
Views UI（storyboard）
	~Process学习摘要
	~login UI
	~Userinfo_no 废弃
	~MusicListWithSection 课程列表 （重构）
	~MusicList 废弃
	~Music 播放器界面
	LaunchScreen.storyboard

Enesco.xcworkspace 
EnescoUITests      
PDF                 电子书阅读器
Podfile            
Pods                 xcxonfig
README.md



















