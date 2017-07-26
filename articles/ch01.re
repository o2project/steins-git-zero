= GitでSteins;Gateを解説する

GitとSteins;Gateは親和性が高いです。
それは自分が過去にSteins;Gitという本を書けたことからも分かるでしょう@<fn>{steins-git}。
//footnote[steins-git][http://o2project.github.io/steins-git/]

ここからはGitやGitHubの機能を使ってSteins;Gateを解説していきます。

== Steins;Gateの目的

GitをGitHubの開発の流れに沿って使った場合、masterブランチはいつでもリリース可能なものとなります@<fn>{github-flow-japanese}。
//footnote[github-flow-japanese][https://gist.github.com/Gab-km/3705015]
Steins;Gateはmasterブランチを「シュタインズゲート」バージョンとしてリリース可能にするために岡部倫太郎が試行錯誤し、ブランチ間を@<code>{git checkout}していきます。

Steins;Gateは、アトラクタフィールドβから始まりました。これはGitのタグで@<kw>{beta}タグが作られた状態です。
1.130426ブランチに岡部倫太郎の「紅莉栖が刺された」というDメールをコミットして電話レンジ（仮）というリモートリポジトリにプッシュしたあと、@<kw>{alpha}というタグが作られました@<fn>{software-version}。
//footnote[software-version][ソフトウェアのバージョンはα→β→RC→GAと進んでいきますがSteins;Gateのストーリー上これに依らない流れになっています]
これでアトラクタフィールドαへ移動した状態です。

Steins;Gate 0はβ世界線で阿万音鈴羽が岡部倫太郎に対し牧瀬紅莉栖を助けることが世界を助けると教えたところからブランチが分岐した物語となります。
Steins;Gateでは、椎名まゆりが岡部倫太郎に対しビンタをして鳳凰院凶真が復活するブランチ（1.130209）でした。
それがSteins;Gate 0では岡部倫太郎へビンタしようとする阿万音鈴羽を椎名まゆりが止めるブランチ（1.129348）となります。

どちらのブランチも最終目標はシュタインズゲート世界線へ行くことです。
つまりmasterブランチへ世界を騙すPull Requestをマージしてシュタインズゲートというタグを作るのが目的となります。

== init

Gitのinitは「新しくゲームを始める」ボタンです。
Steins;Gateシリーズではゲームを起動するとまずは「START」ボタンを押してゲームを始めます。
Gitも@<code>{git init}をターミナル上で実行することにより、任意のディレクトリをGitのリポジトリにできます。

== clone

Gitのクローンは既存のセーブデータを別のセーブデータの枠へ保存する行為です。
Steins;Gateシリーズではすでにあるセーブデータを別のセーブデータの枠へセーブできます。
Gitも@<code>{git clone}をターミナル上で実行することにより、任意のリポジトリを自分の環境上にコピーできます。

== branch

Gitのブランチは世界線です。Steins;Gateではそれぞれの世界線で岡部倫太郎などが行動した記録があります。
Gitも同じように各ブランチで各々が作業しコミットした記録が残ります。

== commit

Gitのコミットは作業内容のセーブです。Steins;Gateのみならず大半のゲームでは意識する・しないに限らずセーブ機能を備えています。
ただゲームの場合はセーブデータの任意の場所へ戻ることができません。Gitの場合はセーブデータの任意の場所に戻る事ができます。
それは「特定のエンディングに進もうとしてセーブしておいたデータに、誤って別のデータをセーブしてしまっても元に戻せる」という事を意味します。

== checkout

Gitのチェックアウトは作業内容のロードです。Steins;Gateのみならず大半のゲームでは意識する・しないに限らずロード機能を備えています。
ゲームのロードは特定のセーブデータを読み込んで続きからできる機能ですが、Gitのチェックアウトは特定のコミットやブランチの状態を今の作業場所に反映させる機能です。
Gitのチェックアウトはロードした内容が既存のファイルに影響を及ぼさないときのみできます。

また世界線変動の機能もあります。特定のブランチを指定した場合はブランチの移動も伴います。つまり世界線変動が起きます。
Steins;GateではDメールを送ったときや打ち消したとき、牧瀬紅莉栖が刺された現場を偽装して刺されていないようにしてタイムマシンで帰ったときに世界線変動が起こっています。
Steins;Gate 0では"紅莉栖"からの着信を受けたり、手に入れたタイムマシンの情報を元にロシアが時間跳躍をおこなったときに世界線変動が起こっています。

== log

Gitのログは会話ログです。誰が会話したか、会話の内容はどんなものだったかをいつでも見ることができますが、Gitでも同じように誰がいつどんな作業をしたかを見ることができます。

== tag

GitのタグはSteins;Gateだと世界線収束範囲（アトラクタフィールド）です。
Steins;Gateの場合はアトラクタフィールドαからアトラクタフィールドβへ変動したときのみタグが作られるのではなく、もうちょっと細かい単位で作られます。

たとえばアトラクタフィールドαの中でも0.571024ブランチから0.523299ブランチへ移動したときにタグが作られます。
この状態をタグで表すと@<code>{0.571024-alpha}と@<code>{0.523299-alpha}のタグがある状態になります。

Steins;Gateでは世界線変動がおこなわれるたびに次のことがおこなわれています。

  * @<code>{git tag <任意の世界線変動率>}
  * @<code>{git branch <変動した先の世界線変動率>}
  * @<code>{git checkout <変動した先の世界線変動率>}

なおSteins;Gateではmasterブランチができたとき、0.000000というタグがつけられました。
Steins;Gateの目的は1.048596というタグをつけることです。

== diff

Gitのdiffはダイバージェンスメーターです。Gitのdiffは作業した内容間やブランチ間の差分を見ることができます。
Gitのdiffは基準となる世界線に対してどれだけ世界線が変動したかを数字でしか見られないダイバージェンスメーターと比較して高機能です。

ブランチ間で状況が違うことは多々あります。たとえば大抵の世界線において秋葉原は萌えの街です。しかしフェイリスがDメールを送った場合は電気街になります。
そういった分かりやすい変化であれば差分を見るまでもなく変化に気づきますが、漆原るかが女性になったように変化が分かりにくい事象もあります。
そういったときにブランチ間の差分を簡単かつ詳細に見られるGitのdiffは便利です。

== merge

GitのマージはDメールやDラインです。Gitのあるブランチに別のブランチをマージした瞬間、そのあるブランチは別のブランチの影響を受けます。
Steins;Gateではマージした瞬間にmasterブランチの状況が変わり、元の世界線の世界線変動率を基としてタグが作られます。
タグが作られたあとは、新しいブランチが作られチェックアウトされます。

== revert

GitのリバートはDメールの打ち消しです。Steins;Gateではアトラクタフィールドβに変動するため、次のように今まで送ってきたDメールを打ち消すDメールを送りました。

 * 阿万音鈴羽を尾行せよと示唆するDメールに対しては、それは罠だと警告するDメールを送った
 * フェイリスが送った自身の誘拐を騙ったDメールに対しては、それが冗談であるDメールを送った
 * 漆原るかが送った母親に対しての野菜を食べろというDメールに対しては、意味をなさないメッセージでいたずらだと思わせるDメールを送った
 * 桐生萌郁が送ったIBN5100は柳林神社にあるというDメールに対しては、FBの携帯から作戦は中止し待機するよう伝えるDメールを送った

このようにDメールを打ち消すDメールを送ってきましたが、Gitでもリバートを使えば指定したコミットでの変更内容をなかったことにできます。

== cherry-pick

Gitのチェリーピックは劇場版で岡部倫太郎が他の世界線で経験したことをフラッシュバックした現象を指します。
Gitのチェリーピックはあるコミットだけを現在のブランチに取り込むものです。

Steins;Gate 負荷領域のデジャブでは岡部倫太郎が阿万音鈴羽エンディングにつながる無限サイクリングなどの記憶を突如思い出します。
これは岡部倫太郎の記憶の中で無限サイクリングなどの記憶をチェリーピックした状態といえます。

== Issues

GitHubのイシューは円卓会議です。
GitHubのイシューは現在のリポジトリにある問題点や改善したい点を皆で議論することができます。
またソフトウェアを象徴するロゴをどうするかなどの議論も時々おこなわれます。
さながら岡部倫太郎たちが時間を遡って送れるメールをDメールと名付けた円卓会議に似ています。

== Pages

GitHubのページは未来ガジェット研究所のwebページです。
リポジトリのmasterブランチ上に@<code>{docs}というディレクトリを作ってその中にHTMLを置くか、gh-pagesブランチ上にHTMLを置くことでwebページを公開できます。
また未来ガジェット研究所のページ@<fn>{future-gadget-lab}みたいにドメインを自由に設定できます。
//footnote[future-gadget-lab][http://futuregadget-lab.com/]

== Wiki

GitHubのウィキは未来ガジェット研究所に置かれたホワイトボードです。
牧瀬紅莉栖がラボメンに対しタイムリープ理論を説明したときにホワイトボードを使いました。
GitHubのWikiもそのリポジトリの説明ややることを書けます。

== Projects

GitHubのプロジェクトはオペレーションです。
過去のコミットへさかのぼったまま戻れなくなった椎名まゆりと阿万音鈴羽に現在のHEADのハッシュ値を渡し、可能ならばHEADに戻ってこさせるオペレーションがあります。
それはオペレーション・アルタイルと岡部倫太郎が名付けましたが、GitHubのプロジェクトもそのようにやることに対し名前を付けて一連の作業をおこなうことができます。

== Pull Request

GitHubのプルリクエストは岡部倫太郎以外がDメールやDラインを送る場合に岡部倫太郎に文言を見せる行動を指しています。
実際の例を出すと、桐生萌郁が「携帯の機種変に失敗したので前の携帯を使い続ける」旨のDメールを送ろうとしたときに、岡部倫太郎に見せてからDメールを送りました。
これは作業内容をコミットしてプッシュした後、他のメンバーに変更点を伝えて何かあればコメントしてもらってからマージする流れと同じです。

プルリクエストにはその変更が問題ないと承認する機能があります。また変更してほしい場合に変更をリクエストする機能もあります。
Steins;Gateで桐生萌郁がDメールを送る直前に文言を差し替えたことは、変更が問題ないと承認されてから変更を加えたことになります。
承認されていない変更なのでバグが起きる可能性もあります。実際にSteins;Gateでは世界線変動が起きて、岡部倫太郎の主観からは桐生萌郁が消えたように見えました。
なので承認されたあとは何も変更を加えないようにするのが良いと言えます。

Steins;Gate 0の@<kw>{盟誓のリナシメント}では自分自身に向けてDラインとしてPull Requestを送ります。
これをマージした結果、岡部倫太郎は2025年に過去の自分へ向けて「自分を騙せ、世界を騙せ」とPull Requestする執念オカリンへつながります。
