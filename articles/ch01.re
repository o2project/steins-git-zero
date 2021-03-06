= GitでSteins;Gateを説明する

Gitを使ってSteins;Gateの説明をする前にSteins;Gateの目的を書きます。
Steins;Gateは、アトラクタフィールドβやαではないシュタインズゲートというアトラクタフィールドへ行くため、岡部倫太郎が試行錯誤して世界線間を移動していくものです。

Steins;Gateは、アトラクタフィールドβから始まりました。これはGitのタグで@<kw>{beta}タグが作られた状態です。
1.130426ブランチに岡部倫太郎の「紅莉栖が刺された」というDメールをコミットして電話レンジ（仮）というリモートリポジトリにプッシュしたあと、@<kw>{alpha}というタグが作られました@<fn>{software-version}。
//footnote[software-version][ソフトウェアのバージョンはα→β→RC→GAと進んでいきますがSteins;Gateのストーリー上これに依らない流れになっています]
これでアトラクタフィールドαへ移動した状態です。

そこからDメールの実験で世界線変動を繰り返します。これによる副作用として秋葉原が萌えの街から電気街へ変貌したり、漆原るかが女性になるといった変化が起こります。
世界線移動を繰り返した結果として、最初の@<kw>{牧瀬紅莉栖が刺された}というDメールが全ての原因だったことに気づき、そのDメールを打ち消します。

Dメールを打ち消したあとはアトラクタフィールドβへ移動しますが、そこで牧瀬紅莉栖を助けることが世界を助けることになると阿万音鈴羽から告げられます。
そして2025年の岡部倫太郎が後押しをして、1度は牧瀬紅莉栖を救出することに失敗しつつ最終的に過去改変を成し遂げた結果、シュタインズゲートバージョンがリリースされました。

Steins;Gate 0はβ世界線で阿万音鈴羽が岡部倫太郎に対し牧瀬紅莉栖を助けることが世界を助けると教えたところからブランチが分岐した物語となります。
Steins;Gateでは、椎名まゆりが岡部倫太郎に対しビンタをして鳳凰院凶真が復活するブランチ（1.130209）でした。
それがSteins;Gate 0では岡部倫太郎へビンタしようとする阿万音鈴羽を椎名まゆりが止めるブランチ（1.129348）となります

Steins;Gate 0はmasterブランチからブランチが分岐するように序盤でストーリーが二手に分かれます。
1つが小説をもとにしたストーリーで、もう1つはゲームオリジナルのストーリーとなります。

そのうち盟誓のリナシメントというゲームオリジナルのストーリーでは自分自身に向けてDラインを送ります。
これをマージした結果、岡部倫太郎は2025年に過去の自分へ向けて「過去の自分と世界を騙せ」とPull Requestする執念オカリンへつながります。

では、この目的をできる限りGitで説明していきます。

== init

Gitのinitは「新しくゲームを始める」ボタンです。
Gitでは@<code>{git init}をターミナル上で実行することにより、任意のディレクトリをGitのリポジトリにできます（@<img>{init}）。

//image[init][initを実行して新しいリポジトリが作られた]{
//}

Steins;Gateシリーズでゲームを起動したときに「START」ボタンを押してゲームを始めるのと同じです。

== clone

Gitのクローンは椎名かがりに牧瀬紅莉栖の記憶がコピーされたように、既存のリポジトリを自分のPC上にコピーすることを指します。
@<code>{git clone}で既存のリポジトリを指定して実行することにより、そのリポジトリを自分の環境上にコピーできます（@<img>{clone}）。

//image[clone][cloneを実行して既存のリポジトリが自分のPC上にコピーされた]{
//}

Steins;Gate 0は最初に大きくストーリー分岐しますが、そのときにゲームオリジナルのストーリーへ分岐した場合、22歳の椎名かがりが登場します。
この椎名かがりは牧瀬紅莉栖の記憶がコピーされた状態です。この状態は椎名かがりの中に牧瀬紅莉栖の記憶というリポジトリのコピーがある状態です。

== branch

Gitのブランチは世界線です。Gitでは各ブランチごとに作業してコミットした記録が残ります（@<img>{branch}）。

//image[branch][ブランチごとに履歴がある（ローカル上にはないブランチも表示するオプションを使ってます）]{
//}

岡部倫太郎らがそれぞれの世界線で行動した記録が世界線ごとに残っているのと同じです。

== commit

Gitのコミットはセーブ機能です。これまでやった作業内容をコミットすることでリポジトリに作業内容を記録できます（@<img>{commit}）。

//image[commit][コミットをすることで作業内容のセーブができる]{
//}

Gitではコミットしたあと後述する@<code>{checkout}を使うことで任意のコミットへ戻る事ができます。
それはSteins;Gateで例えれば「特定のエンディングに進もうとしてセーブしておいたデータに、誤って別のデータをセーブしても元に戻せる」ことを意味します。
Steins;Gateのみならず大半のゲームでは意識する・しないに限らずセーブ機能を備えています。ただしゲームの場合は任意のセーブポイントへ戻れないことが多いです。

== checkout

Gitのチェックアウトはロード機能です。
Steins;Gateのみならず大半のゲームでは意識する・しないに限らずロード機能を備えています。
ゲームのロードは特定のセーブデータを読み込んで続きからできる機能です。

Gitのチェックアウトは特定のコミットやブランチの状態を今の作業場所に反映させる機能です。
Gitのチェックアウトはロードした内容が既存のファイルに影響を及ぼさないときのみできます。

また世界線変動の機能もあります。
@<code>{git checkout}を実行するときに、特定のブランチか特定のブランチにしかないコミットを指定した場合ブランチの移動がおこります（@<img>{checkout}）。
これは世界線変動が起きていることになります。

//image[checkout][前のコミットを指定したことで世界線変動が起きた例]{
//}

== log

Gitのログは会話ログです。Gitでは誰がいつどんな作業をしたかを@<code>{git log}で見ることができます（@<img>{log}）。

//image[log][今までの作業履歴をgit logで見られる]{
//}

Steins;Gateでも誰が会話したか、会話の内容はどんなものだったかをいつでも見ることができます。

== tag

Gitのタグは世界線収束範囲（アトラクタフィールド）です。
Gitではリポジトリの状態にタグを付けることで、特定の状態が特別なものであることを示せます。
そのためソフトウェアのリリース時には必ずといっていいほどタグが作られます。

Steins;Gateの場合はアトラクタフィールドαからアトラクタフィールドβへ変動したときのみタグがつけられるわけではありません。
もう少し細かい単位で作られます。

たとえばアトラクタフィールドαの中でも0.571024ブランチから0.523299ブランチへ移動したときにタグが作られます。
このときタグの状態は@<code>{0.571024-alpha}と@<code>{0.523299-alpha}のタグがある状態になります。

Steins;Gateでは世界線変動がおこなわれるたびに次のことがおこなわれています。

  * @<code>{git tag <任意の世界線変動率>}
  * @<code>{git branch <変動した先の世界線変動率>}
  * @<code>{git checkout <変動した先の世界線変動率>}

Steins;Gateではmasterブランチができたとき、0.000000というタグがつけられました。
Steins;Gateの目的はシュタインズゲート世界線に達すること、つまり1.048596というタグをつけることです。

== diff

Gitのdiffはダイバージェンスメーターです。Gitのdiffは作業した内容やブランチ間の差分を見ることができます。
ダイバージェンスメーターでは基準となる世界線に対してどれだけ世界線が変動したかを数字でしか見られないですが、Gitのdiffは変更された内容も見られます。

ブランチ間で状況が違うことは多々あります。たとえば大抵の世界線において秋葉原は萌えの街ですが、フェイリスのDメールが送られたあとは電気街になります。
そういう分かりやすい変化であれば差分を見るまでもなく変化に気づけますが、漆原るかが女性になるという分かりにくい変化もあります。
そういったときにもしGitのdiffがあればブランチ間の差分を簡単かつ詳細に見られるため、分かりにくい変化でも気づけます。

== merge

GitのマージはDメールやDラインです。Gitのあるブランチに他のブランチをマージすると元のブランチにも影響を及ぼします。
Steins;GateではDメールが送られた瞬間にmasterブランチの状況が変わり、元の世界線変動率を基としてタグが作られます。
タグが作られたあとは、新しいブランチが作られてチェックアウトされます。

== blame

Gitのblameは犯人探しです。@<code>{git blame}をすることでファイルの行ごとに変更した人が表示されます。

Steins;GateではIBN5100がなくなっていることに世界線変動率0.456903の世界で気づきます。
その後紆余曲折あり、IBN5100を運び出す人が誰なのかを岡部倫太郎は桐生萌郁と一緒に見張ります。
この見張りと一緒で@<kw>{blame}はどのコミットでコードに変更が入ったか調べるのに便利です。

== revert

GitのリバートはDメールの打ち消しです。Gitではリバートを使えば指定したコミットでの変更内容をなかったことにできます

Steins;Gateではアトラクタフィールドβに変動するため、次のように今まで送ってきたDメールを打ち消しました。

 * 阿万音鈴羽を尾行せよと示唆するDメールに対しては、罠だと警告するDメールを送った
 * フェイリスが送った自身の誘拐を騙ったDメールに対しては、それが冗談であるDメールを送った
 * 漆原るかが送った母親に対しての野菜を食べろというDメールに対しては、意味をなさないメッセージでいたずらだと思わせるDメールを送った
 * 桐生萌郁が送ったIBN5100は柳林神社にあるというDメールに対しては、FBの携帯から作戦は中止し待機するよう伝えるDメールを送った

== cherry-pick

Gitのチェリーピックは劇場版で岡部倫太郎が他の世界線で経験したことをフラッシュバックした現象です。
Gitのチェリーピックはあるコミットだけを現在のブランチに取り込むものです。

Steins;Gate 負荷領域のデジャブでは岡部倫太郎が阿万音鈴羽エンディングにつながる無限サイクリングなどの記憶を突如思い出します。
これは岡部倫太郎の記憶から無限サイクリングなどの記憶をチェリーピックした状態といえます。
