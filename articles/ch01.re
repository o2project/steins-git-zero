= GitでSteins;Gateを解説する

GitとSteins;Gateは親和性が高いです。
それは自分が過去にSteins;Gitという本を書けたことからも分かるでしょう@<fn>{steins-git}。
//footnote[steins-git][http://o2project.github.io/steins-git/]

ここからはGitやGitHubの機能を使ってSteins;Gateを解説していきます。

== branch

Gitのブランチは世界線です。

== checkout

Gitのチェックアウトは世界線変動です。

== log

Gitのログは会話ログです。誰が会話したか、会話の内容はどんなものだったかをいつでも見ることができますが、Gitでも同じように誰がいつどんな作業をしたかを見ることができます。

== tag

GitのタグはSteins;Gateだと世界線収束範囲（アトラクタフィールド）です。
Steins;Gateの場合はアトラクタフィールドαからアトラクタフィールドβへ変動したときのみタグが作られるのではなく、もうちょっと細かい単位で作られます。

たとえばアトラクタフィールドαの中でも0.571024というブランチから0.523299というブランチへ移動したときにタグが作られます。
この状態をタグで表すと@<code>{0.571024-alpha}と@<code>{0.523299-alpha}というタグがある状態になります。

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

== cherry-pick

Gitのチェリーピックは劇場版で岡部倫太郎が他の世界線で経験したことをフラッシュバックした現象を指します。
Gitのチェリーピックはあるコミットだけを現在のブランチに取り込むものです。

Steins;Gate 負荷領域のデジャブでは岡部倫太郎が阿万音鈴羽エンディングにつながる無限サイクリングなどの記憶を突如思い出します。
これは岡部倫太郎の記憶の中で無限サイクリングなどの記憶をチェリーピックした状態といえます。

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

Steins;Gate 0では"紅莉栖"から電話の着信という形でプルリクエストが来ます。
"紅莉栖"からのプルリクエストはSteins;Gate 0において重要なので注意してレビューをする必要があります。
