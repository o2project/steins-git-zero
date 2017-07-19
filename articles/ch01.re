= GitでSteins;Gateを解説する

GitとSteins;Gateは親和性が高いです。
それは自分が過去にSteins;Gitという本を書けたことからも分かるでしょう@<fn>{steins-git}。
//footnote[steins-git][http://o2project.github.io/steins-git/]

ここからはGitやGitHubの機能を使ってSteins;Gateを解説していきます。

== ブランチ

Gitのブランチは世界線です。

== チェックアウト

Gitのチェックアウトは世界線変動です。
ブランチ間で状況が違うことは多々あります。たとえば秋葉原が萌えの街だったり電気街になっていたりということです。

== タグ

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
