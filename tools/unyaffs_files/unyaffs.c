  


<!DOCTYPE html>
<html>
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# githubog: http://ogp.me/ns/fb/githubog#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <title>unyaffs/unyaffs.c at master · ehlers/unyaffs · GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />
    <link rel="apple-touch-icon-precomposed" sizes="57x57" href="apple-touch-icon-114.png" />
    <link rel="apple-touch-icon-precomposed" sizes="114x114" href="apple-touch-icon-114.png" />
    <link rel="apple-touch-icon-precomposed" sizes="72x72" href="apple-touch-icon-144.png" />
    <link rel="apple-touch-icon-precomposed" sizes="144x144" href="apple-touch-icon-144.png" />

    
    
    <link rel="icon" type="image/x-icon" href="/favicon.png" />

    <meta content="authenticity_token" name="csrf-param" />
<meta content="6YDRwGGODpglyhy1hKGbV8sz5GK4IWwOJWVi/Hqo+1M=" name="csrf-token" />

    <link href="https://a248.e.akamai.net/assets.github.com/assets/github-8a13a03ffae59e2edbf9c984f0b5dfd683540538.css" media="screen" rel="stylesheet" type="text/css" />
    <link href="https://a248.e.akamai.net/assets.github.com/assets/github2-930e3b288a944b966459c5167a677e106ffc2588.css" media="screen" rel="stylesheet" type="text/css" />
    


    <script src="https://a248.e.akamai.net/assets.github.com/assets/frameworks-ac63e4a1fc7b5030f8c99d5200722f51ed8e7baa.js" type="text/javascript"></script>
    <script defer="defer" src="https://a248.e.akamai.net/assets.github.com/assets/github-305a3da4e430ff26cca020405f9a254c85ca7a27.js" type="text/javascript"></script>
    

      <link rel='permalink' href='/ehlers/unyaffs/blob/44e4b2e19288400062da4eb2525cbf2f09c65c20/unyaffs.c'>
    <meta property="og:title" content="unyaffs"/>
    <meta property="og:type" content="githubog:gitrepository"/>
    <meta property="og:url" content="https://github.com/ehlers/unyaffs"/>
    <meta property="og:image" content="https://a248.e.akamai.net/assets.github.com/images/gravatars/gravatar-user-420.png?1345673560"/>
    <meta property="og:site_name" content="GitHub"/>
    <meta property="og:description" content="Extract files from a YAFFS2 file system image. Contribute to unyaffs development by creating an account on GitHub."/>

    <meta name="description" content="Extract files from a YAFFS2 file system image. Contribute to unyaffs development by creating an account on GitHub." />
  <link href="https://github.com/ehlers/unyaffs/commits/master.atom" rel="alternate" title="Recent Commits to unyaffs:master" type="application/atom+xml" />

  </head>


  <body class="logged_out page-blob windows vis-public env-production ">
    <div id="wrapper">

    
    

      <div id="header" class="true clearfix">
        <div class="container clearfix">
          <a class="site-logo " href="https://github.com/">
            <img alt="GitHub" class="github-logo-4x" height="30" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov7@4x.png?1340935010" />
            <img alt="GitHub" class="github-logo-4x-hover" height="30" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov7@4x-hover.png?1340935010" />
          </a>


                  <!--
      make sure to use fully qualified URLs here since this nav
      is used on error pages on other domains
    -->
    <ul class="top-nav logged_out">
        <li class="pricing"><a href="https://github.com/plans">Signup and Pricing</a></li>
        <li class="explore"><a href="https://github.com/explore">Explore GitHub</a></li>
      <li class="features"><a href="https://github.com/features">Features</a></li>
        <li class="blog"><a href="https://github.com/blog">Blog</a></li>
      <li class="login"><a href="https://github.com/login?return_to=%2Fehlers%2Funyaffs%2Fblob%2Fmaster%2Funyaffs.c">Sign in</a></li>
    </ul>



          
        </div>
      </div>

      

      


            <div class="site hfeed" itemscope itemtype="http://schema.org/WebPage">
      <div class="container hentry">
        
        <div class="pagehead repohead instapaper_ignore readability-menu">
        <div class="title-actions-bar">
          


              <ul class="pagehead-actions">


          <li>
            <span class="star-button"><a href="/login?return_to=%2Fehlers%2Funyaffs" class="minibutton js-toggler-target entice tooltipped leftwards" title="You must be signed in to use this feature" rel="nofollow"><span class="mini-icon mini-icon-star"></span>Star</a><a class="social-count js-social-count" href="/ehlers/unyaffs/stargazers">9</a></span>
          </li>
          <li>
            <a href="/login?return_to=%2Fehlers%2Funyaffs" class="minibutton js-toggler-target fork-button entice tooltipped leftwards"  title="You must be signed in to fork a repository" rel="nofollow"><span class="mini-icon mini-icon-fork"></span>Fork</a><a href="/ehlers/unyaffs/network" class="social-count">6</a>
          </li>
    </ul>

          <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
            <span class="repo-label"><span>public</span></span>
            <span class="mega-icon mega-icon-public-repo"></span>
            <span class="author vcard">
              <a href="/ehlers" class="url fn" itemprop="url" rel="author">
              <span itemprop="title">ehlers</span>
              </a></span> /
            <strong><a href="/ehlers/unyaffs" class="js-current-repository">unyaffs</a></strong>
          </h1>
        </div>

          

  <ul class="tabs">
    <li><a href="/ehlers/unyaffs" class="selected" highlight="repo_sourcerepo_downloadsrepo_commitsrepo_tagsrepo_branches">Code</a></li>
    <li><a href="/ehlers/unyaffs/network" highlight="repo_network">Network</a></li>
    <li><a href="/ehlers/unyaffs/pulls" highlight="repo_pulls">Pull Requests <span class='counter'>0</span></a></li>

      <li><a href="/ehlers/unyaffs/issues" highlight="repo_issues">Issues <span class='counter'>0</span></a></li>



    <li><a href="/ehlers/unyaffs/graphs" highlight="repo_graphsrepo_contributors">Graphs</a></li>


  </ul>
  
<div class="frame frame-center tree-finder" style="display:none"
      data-tree-list-url="/ehlers/unyaffs/tree-list/44e4b2e19288400062da4eb2525cbf2f09c65c20"
      data-blob-url-prefix="/ehlers/unyaffs/blob/44e4b2e19288400062da4eb2525cbf2f09c65c20"
    >

  <div class="breadcrumb">
    <span class="bold"><a href="/ehlers/unyaffs">unyaffs</a></span> /
    <input class="tree-finder-input js-navigation-enable" type="text" name="query" autocomplete="off" spellcheck="false">
  </div>

    <div class="octotip">
      <p>
        <a href="/ehlers/unyaffs/dismiss-tree-finder-help" class="dismiss js-dismiss-tree-list-help" title="Hide this notice forever" rel="nofollow">Dismiss</a>
        <span class="bold">Octotip:</span> You've activated the <em>file finder</em>
        by pressing <span class="kbd">t</span> Start typing to filter the
        file list. Use <span class="kbd badmono">↑</span> and
        <span class="kbd badmono">↓</span> to navigate,
        <span class="kbd">enter</span> to view files.
      </p>
    </div>

  <table class="tree-browser" cellpadding="0" cellspacing="0">
    <tr class="js-header"><th>&nbsp;</th><th>name</th></tr>
    <tr class="js-no-results no-results" style="display: none">
      <th colspan="2">No matching files</th>
    </tr>
    <tbody class="js-results-list js-navigation-container">
    </tbody>
  </table>
</div>

<div id="jump-to-line" style="display:none">
  <h2>Jump to Line</h2>
  <form accept-charset="UTF-8">
    <input class="textfield" type="text">
    <div class="full-button">
      <button type="submit" class="classy">
        Go
      </button>
    </div>
  </form>
</div>


<div class="tabnav">

  <span class="tabnav-right">
    <ul class="tabnav-tabs">
      <li><a href="/ehlers/unyaffs/tags" class="tabnav-tab" highlight="repo_tags">Tags <span class="counter ">6</span></a></li>
      <li><a href="/ehlers/unyaffs/downloads" class="tabnav-tab" highlight="repo_downloads">Downloads <span class="counter blank">0</span></a></li>
    </ul>
    
  </span>

  <div class="tabnav-widget scope">

    <div class="context-menu-container js-menu-container js-context-menu">
      <a href="#"
         class="minibutton bigger switcher js-menu-target js-commitish-button btn-branch repo-tree"
         data-hotkey="w"
         data-master-branch="master"
         data-ref="master">
         <span><em class="mini-icon mini-icon-branch"></em><i>branch:</i> master</span>
      </a>

      <div class="context-pane commitish-context js-menu-content">
        <a href="javascript:;" class="close js-menu-close"><span class="mini-icon mini-icon-remove-close"></span></a>
        <div class="context-title">Switch branches/tags</div>
        <div class="context-body pane-selector commitish-selector js-navigation-container">
          <div class="filterbar">
            <input type="text" id="context-commitish-filter-field" class="js-navigation-enable" placeholder="Filter branches/tags" data-filterable />
            <ul class="tabs">
              <li><a href="#" data-filter="branches" class="selected">Branches</a></li>
              <li><a href="#" data-filter="tags">Tags</a></li>
            </ul>
          </div>

          <div class="js-filter-tab js-filter-branches" data-filterable-for="context-commitish-filter-field" data-filterable-type=substring>
            <div class="no-results js-not-filterable">Nothing to show</div>
              <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target selected">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/ehlers/unyaffs/blob/master/unyaffs.c" class="js-navigation-open" data-name="master" rel="nofollow">master</a>
                </h4>
              </div>
          </div>

          <div class="js-filter-tab js-filter-tags" style="display:none" data-filterable-for="context-commitish-filter-field" data-filterable-type=substring>
            <div class="no-results js-not-filterable">Nothing to show</div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/ehlers/unyaffs/blob/0.9.4/unyaffs.c" class="js-navigation-open" data-name="0.9.4" rel="nofollow">0.9.4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/ehlers/unyaffs/blob/0.9.3/unyaffs.c" class="js-navigation-open" data-name="0.9.3" rel="nofollow">0.9.3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/ehlers/unyaffs/blob/0.9.2/unyaffs.c" class="js-navigation-open" data-name="0.9.2" rel="nofollow">0.9.2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/ehlers/unyaffs/blob/0.9.1/unyaffs.c" class="js-navigation-open" data-name="0.9.1" rel="nofollow">0.9.1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/ehlers/unyaffs/blob/0.9/unyaffs.c" class="js-navigation-open" data-name="0.9" rel="nofollow">0.9</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/ehlers/unyaffs/blob/0.8/unyaffs.c" class="js-navigation-open" data-name="0.8" rel="nofollow">0.8</a>
                </h4>
              </div>
          </div>
        </div>
      </div><!-- /.commitish-context-context -->
    </div>
  </div> <!-- /.scope -->

  <ul class="tabnav-tabs">
    <li><a href="/ehlers/unyaffs" class="selected tabnav-tab" highlight="repo_source">Files</a></li>
    <li><a href="/ehlers/unyaffs/commits/master" class="tabnav-tab" highlight="repo_commits">Commits</a></li>
    <li><a href="/ehlers/unyaffs/branches" class="tabnav-tab" highlight="repo_branches" rel="nofollow">Branches <span class="counter ">1</span></a></li>
  </ul>

</div>

  
  
  


          

        </div><!-- /.repohead -->

        <div id="js-repo-pjax-container" data-pjax-container>
          


<!-- blob contrib key: blob_contributors:v21:52d7fcf688b290a0f3e656ccbda608c6 -->
<!-- blob contrib frag key: views10/v8/blob_contributors:v21:52d7fcf688b290a0f3e656ccbda608c6 -->

<!-- block_view_fragment_key: views10/v8/blob:v21:92268018ce4b8e3721f796f9f91514d5 -->

  <div id="slider">

    <div class="breadcrumb" data-path="unyaffs.c/">
      <b itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/ehlers/unyaffs/tree/44e4b2e19288400062da4eb2525cbf2f09c65c20" class="js-rewrite-sha" itemprop="url"><span itemprop="title">unyaffs</span></a></b> / <strong class="final-path">unyaffs.c</strong> <span class="js-clippy mini-icon mini-icon-clippy " data-clipboard-text="unyaffs.c" data-copied-hint="copied!" data-copy-hint="copy to clipboard"></span>
    </div>

      
  <div class="commit file-history-tease js-blob-contributors-content" data-path="unyaffs.c/">
    <img class="main-avatar" height="24" src="https://secure.gravatar.com/avatar/bf626d75894bb599ac1501586333037a?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="24" />
    <span class="author"><a href="/ehlers">ehlers</a></span>
    <time class="js-relative-date" datetime="2012-05-01T02:30:19-07:00" title="2012-05-01 02:30:19">May 01, 2012</time>
    <div class="commit-title">
        <a href="/ehlers/unyaffs/commit/70d4fb5104d1af96c5d9f059e3d07c6dfc8005a4" class="message">Version 0.9.4</a>
    </div>

    <div class="participation">
      <p class="quickstat"><a href="#blob_contributors_box" rel="facebox"><strong>1</strong> contributor</a></p>
      
    </div>
    <div id="blob_contributors_box" style="display:none">
      <h2>Users on GitHub who have contributed to this file</h2>
      <ul class="facebox-user-list">
        <li>
          <img height="24" src="https://secure.gravatar.com/avatar/bf626d75894bb599ac1501586333037a?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="24" />
          <a href="/ehlers">ehlers</a>
        </li>
      </ul>
    </div>
  </div>


    <div class="frames">
      <div class="frame frame-center" data-path="unyaffs.c/" data-permalink-url="/ehlers/unyaffs/blob/44e4b2e19288400062da4eb2525cbf2f09c65c20/unyaffs.c" data-title="unyaffs/unyaffs.c at master · ehlers/unyaffs · GitHub" data-type="blob">

        <div id="files" class="bubble">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><b class="mini-icon mini-icon-text-file"></b></span>
                <span class="mode" title="File Mode">file</span>
                  <span>802 lines (711 sloc)</span>
                <span>21.205 kb</span>
              </div>
              <ul class="button-group actions">
                  <li>
                    <a class="grouped-button file-edit-link minibutton bigger lighter js-rewrite-sha" href="/ehlers/unyaffs/edit/44e4b2e19288400062da4eb2525cbf2f09c65c20/unyaffs.c" data-method="post" rel="nofollow" data-hotkey="e">Edit</a>
                  </li>
                <li>
                  <a href="/ehlers/unyaffs/raw/master/unyaffs.c" class="minibutton grouped-button bigger lighter" id="raw-url">Raw</a>
                </li>
                  <li>
                    <a href="/ehlers/unyaffs/blame/master/unyaffs.c" class="minibutton grouped-button bigger lighter">Blame</a>
                  </li>
                <li>
                  <a href="/ehlers/unyaffs/commits/master/unyaffs.c" class="minibutton grouped-button bigger lighter" rel="nofollow">History</a>
                </li>
              </ul>
            </div>
              <div class="data type-c">
      <table cellpadding="0" cellspacing="0" class="lines">
        <tr>
          <td>
            <pre class="line_numbers"><span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>
<span id="L90" rel="#L90">90</span>
<span id="L91" rel="#L91">91</span>
<span id="L92" rel="#L92">92</span>
<span id="L93" rel="#L93">93</span>
<span id="L94" rel="#L94">94</span>
<span id="L95" rel="#L95">95</span>
<span id="L96" rel="#L96">96</span>
<span id="L97" rel="#L97">97</span>
<span id="L98" rel="#L98">98</span>
<span id="L99" rel="#L99">99</span>
<span id="L100" rel="#L100">100</span>
<span id="L101" rel="#L101">101</span>
<span id="L102" rel="#L102">102</span>
<span id="L103" rel="#L103">103</span>
<span id="L104" rel="#L104">104</span>
<span id="L105" rel="#L105">105</span>
<span id="L106" rel="#L106">106</span>
<span id="L107" rel="#L107">107</span>
<span id="L108" rel="#L108">108</span>
<span id="L109" rel="#L109">109</span>
<span id="L110" rel="#L110">110</span>
<span id="L111" rel="#L111">111</span>
<span id="L112" rel="#L112">112</span>
<span id="L113" rel="#L113">113</span>
<span id="L114" rel="#L114">114</span>
<span id="L115" rel="#L115">115</span>
<span id="L116" rel="#L116">116</span>
<span id="L117" rel="#L117">117</span>
<span id="L118" rel="#L118">118</span>
<span id="L119" rel="#L119">119</span>
<span id="L120" rel="#L120">120</span>
<span id="L121" rel="#L121">121</span>
<span id="L122" rel="#L122">122</span>
<span id="L123" rel="#L123">123</span>
<span id="L124" rel="#L124">124</span>
<span id="L125" rel="#L125">125</span>
<span id="L126" rel="#L126">126</span>
<span id="L127" rel="#L127">127</span>
<span id="L128" rel="#L128">128</span>
<span id="L129" rel="#L129">129</span>
<span id="L130" rel="#L130">130</span>
<span id="L131" rel="#L131">131</span>
<span id="L132" rel="#L132">132</span>
<span id="L133" rel="#L133">133</span>
<span id="L134" rel="#L134">134</span>
<span id="L135" rel="#L135">135</span>
<span id="L136" rel="#L136">136</span>
<span id="L137" rel="#L137">137</span>
<span id="L138" rel="#L138">138</span>
<span id="L139" rel="#L139">139</span>
<span id="L140" rel="#L140">140</span>
<span id="L141" rel="#L141">141</span>
<span id="L142" rel="#L142">142</span>
<span id="L143" rel="#L143">143</span>
<span id="L144" rel="#L144">144</span>
<span id="L145" rel="#L145">145</span>
<span id="L146" rel="#L146">146</span>
<span id="L147" rel="#L147">147</span>
<span id="L148" rel="#L148">148</span>
<span id="L149" rel="#L149">149</span>
<span id="L150" rel="#L150">150</span>
<span id="L151" rel="#L151">151</span>
<span id="L152" rel="#L152">152</span>
<span id="L153" rel="#L153">153</span>
<span id="L154" rel="#L154">154</span>
<span id="L155" rel="#L155">155</span>
<span id="L156" rel="#L156">156</span>
<span id="L157" rel="#L157">157</span>
<span id="L158" rel="#L158">158</span>
<span id="L159" rel="#L159">159</span>
<span id="L160" rel="#L160">160</span>
<span id="L161" rel="#L161">161</span>
<span id="L162" rel="#L162">162</span>
<span id="L163" rel="#L163">163</span>
<span id="L164" rel="#L164">164</span>
<span id="L165" rel="#L165">165</span>
<span id="L166" rel="#L166">166</span>
<span id="L167" rel="#L167">167</span>
<span id="L168" rel="#L168">168</span>
<span id="L169" rel="#L169">169</span>
<span id="L170" rel="#L170">170</span>
<span id="L171" rel="#L171">171</span>
<span id="L172" rel="#L172">172</span>
<span id="L173" rel="#L173">173</span>
<span id="L174" rel="#L174">174</span>
<span id="L175" rel="#L175">175</span>
<span id="L176" rel="#L176">176</span>
<span id="L177" rel="#L177">177</span>
<span id="L178" rel="#L178">178</span>
<span id="L179" rel="#L179">179</span>
<span id="L180" rel="#L180">180</span>
<span id="L181" rel="#L181">181</span>
<span id="L182" rel="#L182">182</span>
<span id="L183" rel="#L183">183</span>
<span id="L184" rel="#L184">184</span>
<span id="L185" rel="#L185">185</span>
<span id="L186" rel="#L186">186</span>
<span id="L187" rel="#L187">187</span>
<span id="L188" rel="#L188">188</span>
<span id="L189" rel="#L189">189</span>
<span id="L190" rel="#L190">190</span>
<span id="L191" rel="#L191">191</span>
<span id="L192" rel="#L192">192</span>
<span id="L193" rel="#L193">193</span>
<span id="L194" rel="#L194">194</span>
<span id="L195" rel="#L195">195</span>
<span id="L196" rel="#L196">196</span>
<span id="L197" rel="#L197">197</span>
<span id="L198" rel="#L198">198</span>
<span id="L199" rel="#L199">199</span>
<span id="L200" rel="#L200">200</span>
<span id="L201" rel="#L201">201</span>
<span id="L202" rel="#L202">202</span>
<span id="L203" rel="#L203">203</span>
<span id="L204" rel="#L204">204</span>
<span id="L205" rel="#L205">205</span>
<span id="L206" rel="#L206">206</span>
<span id="L207" rel="#L207">207</span>
<span id="L208" rel="#L208">208</span>
<span id="L209" rel="#L209">209</span>
<span id="L210" rel="#L210">210</span>
<span id="L211" rel="#L211">211</span>
<span id="L212" rel="#L212">212</span>
<span id="L213" rel="#L213">213</span>
<span id="L214" rel="#L214">214</span>
<span id="L215" rel="#L215">215</span>
<span id="L216" rel="#L216">216</span>
<span id="L217" rel="#L217">217</span>
<span id="L218" rel="#L218">218</span>
<span id="L219" rel="#L219">219</span>
<span id="L220" rel="#L220">220</span>
<span id="L221" rel="#L221">221</span>
<span id="L222" rel="#L222">222</span>
<span id="L223" rel="#L223">223</span>
<span id="L224" rel="#L224">224</span>
<span id="L225" rel="#L225">225</span>
<span id="L226" rel="#L226">226</span>
<span id="L227" rel="#L227">227</span>
<span id="L228" rel="#L228">228</span>
<span id="L229" rel="#L229">229</span>
<span id="L230" rel="#L230">230</span>
<span id="L231" rel="#L231">231</span>
<span id="L232" rel="#L232">232</span>
<span id="L233" rel="#L233">233</span>
<span id="L234" rel="#L234">234</span>
<span id="L235" rel="#L235">235</span>
<span id="L236" rel="#L236">236</span>
<span id="L237" rel="#L237">237</span>
<span id="L238" rel="#L238">238</span>
<span id="L239" rel="#L239">239</span>
<span id="L240" rel="#L240">240</span>
<span id="L241" rel="#L241">241</span>
<span id="L242" rel="#L242">242</span>
<span id="L243" rel="#L243">243</span>
<span id="L244" rel="#L244">244</span>
<span id="L245" rel="#L245">245</span>
<span id="L246" rel="#L246">246</span>
<span id="L247" rel="#L247">247</span>
<span id="L248" rel="#L248">248</span>
<span id="L249" rel="#L249">249</span>
<span id="L250" rel="#L250">250</span>
<span id="L251" rel="#L251">251</span>
<span id="L252" rel="#L252">252</span>
<span id="L253" rel="#L253">253</span>
<span id="L254" rel="#L254">254</span>
<span id="L255" rel="#L255">255</span>
<span id="L256" rel="#L256">256</span>
<span id="L257" rel="#L257">257</span>
<span id="L258" rel="#L258">258</span>
<span id="L259" rel="#L259">259</span>
<span id="L260" rel="#L260">260</span>
<span id="L261" rel="#L261">261</span>
<span id="L262" rel="#L262">262</span>
<span id="L263" rel="#L263">263</span>
<span id="L264" rel="#L264">264</span>
<span id="L265" rel="#L265">265</span>
<span id="L266" rel="#L266">266</span>
<span id="L267" rel="#L267">267</span>
<span id="L268" rel="#L268">268</span>
<span id="L269" rel="#L269">269</span>
<span id="L270" rel="#L270">270</span>
<span id="L271" rel="#L271">271</span>
<span id="L272" rel="#L272">272</span>
<span id="L273" rel="#L273">273</span>
<span id="L274" rel="#L274">274</span>
<span id="L275" rel="#L275">275</span>
<span id="L276" rel="#L276">276</span>
<span id="L277" rel="#L277">277</span>
<span id="L278" rel="#L278">278</span>
<span id="L279" rel="#L279">279</span>
<span id="L280" rel="#L280">280</span>
<span id="L281" rel="#L281">281</span>
<span id="L282" rel="#L282">282</span>
<span id="L283" rel="#L283">283</span>
<span id="L284" rel="#L284">284</span>
<span id="L285" rel="#L285">285</span>
<span id="L286" rel="#L286">286</span>
<span id="L287" rel="#L287">287</span>
<span id="L288" rel="#L288">288</span>
<span id="L289" rel="#L289">289</span>
<span id="L290" rel="#L290">290</span>
<span id="L291" rel="#L291">291</span>
<span id="L292" rel="#L292">292</span>
<span id="L293" rel="#L293">293</span>
<span id="L294" rel="#L294">294</span>
<span id="L295" rel="#L295">295</span>
<span id="L296" rel="#L296">296</span>
<span id="L297" rel="#L297">297</span>
<span id="L298" rel="#L298">298</span>
<span id="L299" rel="#L299">299</span>
<span id="L300" rel="#L300">300</span>
<span id="L301" rel="#L301">301</span>
<span id="L302" rel="#L302">302</span>
<span id="L303" rel="#L303">303</span>
<span id="L304" rel="#L304">304</span>
<span id="L305" rel="#L305">305</span>
<span id="L306" rel="#L306">306</span>
<span id="L307" rel="#L307">307</span>
<span id="L308" rel="#L308">308</span>
<span id="L309" rel="#L309">309</span>
<span id="L310" rel="#L310">310</span>
<span id="L311" rel="#L311">311</span>
<span id="L312" rel="#L312">312</span>
<span id="L313" rel="#L313">313</span>
<span id="L314" rel="#L314">314</span>
<span id="L315" rel="#L315">315</span>
<span id="L316" rel="#L316">316</span>
<span id="L317" rel="#L317">317</span>
<span id="L318" rel="#L318">318</span>
<span id="L319" rel="#L319">319</span>
<span id="L320" rel="#L320">320</span>
<span id="L321" rel="#L321">321</span>
<span id="L322" rel="#L322">322</span>
<span id="L323" rel="#L323">323</span>
<span id="L324" rel="#L324">324</span>
<span id="L325" rel="#L325">325</span>
<span id="L326" rel="#L326">326</span>
<span id="L327" rel="#L327">327</span>
<span id="L328" rel="#L328">328</span>
<span id="L329" rel="#L329">329</span>
<span id="L330" rel="#L330">330</span>
<span id="L331" rel="#L331">331</span>
<span id="L332" rel="#L332">332</span>
<span id="L333" rel="#L333">333</span>
<span id="L334" rel="#L334">334</span>
<span id="L335" rel="#L335">335</span>
<span id="L336" rel="#L336">336</span>
<span id="L337" rel="#L337">337</span>
<span id="L338" rel="#L338">338</span>
<span id="L339" rel="#L339">339</span>
<span id="L340" rel="#L340">340</span>
<span id="L341" rel="#L341">341</span>
<span id="L342" rel="#L342">342</span>
<span id="L343" rel="#L343">343</span>
<span id="L344" rel="#L344">344</span>
<span id="L345" rel="#L345">345</span>
<span id="L346" rel="#L346">346</span>
<span id="L347" rel="#L347">347</span>
<span id="L348" rel="#L348">348</span>
<span id="L349" rel="#L349">349</span>
<span id="L350" rel="#L350">350</span>
<span id="L351" rel="#L351">351</span>
<span id="L352" rel="#L352">352</span>
<span id="L353" rel="#L353">353</span>
<span id="L354" rel="#L354">354</span>
<span id="L355" rel="#L355">355</span>
<span id="L356" rel="#L356">356</span>
<span id="L357" rel="#L357">357</span>
<span id="L358" rel="#L358">358</span>
<span id="L359" rel="#L359">359</span>
<span id="L360" rel="#L360">360</span>
<span id="L361" rel="#L361">361</span>
<span id="L362" rel="#L362">362</span>
<span id="L363" rel="#L363">363</span>
<span id="L364" rel="#L364">364</span>
<span id="L365" rel="#L365">365</span>
<span id="L366" rel="#L366">366</span>
<span id="L367" rel="#L367">367</span>
<span id="L368" rel="#L368">368</span>
<span id="L369" rel="#L369">369</span>
<span id="L370" rel="#L370">370</span>
<span id="L371" rel="#L371">371</span>
<span id="L372" rel="#L372">372</span>
<span id="L373" rel="#L373">373</span>
<span id="L374" rel="#L374">374</span>
<span id="L375" rel="#L375">375</span>
<span id="L376" rel="#L376">376</span>
<span id="L377" rel="#L377">377</span>
<span id="L378" rel="#L378">378</span>
<span id="L379" rel="#L379">379</span>
<span id="L380" rel="#L380">380</span>
<span id="L381" rel="#L381">381</span>
<span id="L382" rel="#L382">382</span>
<span id="L383" rel="#L383">383</span>
<span id="L384" rel="#L384">384</span>
<span id="L385" rel="#L385">385</span>
<span id="L386" rel="#L386">386</span>
<span id="L387" rel="#L387">387</span>
<span id="L388" rel="#L388">388</span>
<span id="L389" rel="#L389">389</span>
<span id="L390" rel="#L390">390</span>
<span id="L391" rel="#L391">391</span>
<span id="L392" rel="#L392">392</span>
<span id="L393" rel="#L393">393</span>
<span id="L394" rel="#L394">394</span>
<span id="L395" rel="#L395">395</span>
<span id="L396" rel="#L396">396</span>
<span id="L397" rel="#L397">397</span>
<span id="L398" rel="#L398">398</span>
<span id="L399" rel="#L399">399</span>
<span id="L400" rel="#L400">400</span>
<span id="L401" rel="#L401">401</span>
<span id="L402" rel="#L402">402</span>
<span id="L403" rel="#L403">403</span>
<span id="L404" rel="#L404">404</span>
<span id="L405" rel="#L405">405</span>
<span id="L406" rel="#L406">406</span>
<span id="L407" rel="#L407">407</span>
<span id="L408" rel="#L408">408</span>
<span id="L409" rel="#L409">409</span>
<span id="L410" rel="#L410">410</span>
<span id="L411" rel="#L411">411</span>
<span id="L412" rel="#L412">412</span>
<span id="L413" rel="#L413">413</span>
<span id="L414" rel="#L414">414</span>
<span id="L415" rel="#L415">415</span>
<span id="L416" rel="#L416">416</span>
<span id="L417" rel="#L417">417</span>
<span id="L418" rel="#L418">418</span>
<span id="L419" rel="#L419">419</span>
<span id="L420" rel="#L420">420</span>
<span id="L421" rel="#L421">421</span>
<span id="L422" rel="#L422">422</span>
<span id="L423" rel="#L423">423</span>
<span id="L424" rel="#L424">424</span>
<span id="L425" rel="#L425">425</span>
<span id="L426" rel="#L426">426</span>
<span id="L427" rel="#L427">427</span>
<span id="L428" rel="#L428">428</span>
<span id="L429" rel="#L429">429</span>
<span id="L430" rel="#L430">430</span>
<span id="L431" rel="#L431">431</span>
<span id="L432" rel="#L432">432</span>
<span id="L433" rel="#L433">433</span>
<span id="L434" rel="#L434">434</span>
<span id="L435" rel="#L435">435</span>
<span id="L436" rel="#L436">436</span>
<span id="L437" rel="#L437">437</span>
<span id="L438" rel="#L438">438</span>
<span id="L439" rel="#L439">439</span>
<span id="L440" rel="#L440">440</span>
<span id="L441" rel="#L441">441</span>
<span id="L442" rel="#L442">442</span>
<span id="L443" rel="#L443">443</span>
<span id="L444" rel="#L444">444</span>
<span id="L445" rel="#L445">445</span>
<span id="L446" rel="#L446">446</span>
<span id="L447" rel="#L447">447</span>
<span id="L448" rel="#L448">448</span>
<span id="L449" rel="#L449">449</span>
<span id="L450" rel="#L450">450</span>
<span id="L451" rel="#L451">451</span>
<span id="L452" rel="#L452">452</span>
<span id="L453" rel="#L453">453</span>
<span id="L454" rel="#L454">454</span>
<span id="L455" rel="#L455">455</span>
<span id="L456" rel="#L456">456</span>
<span id="L457" rel="#L457">457</span>
<span id="L458" rel="#L458">458</span>
<span id="L459" rel="#L459">459</span>
<span id="L460" rel="#L460">460</span>
<span id="L461" rel="#L461">461</span>
<span id="L462" rel="#L462">462</span>
<span id="L463" rel="#L463">463</span>
<span id="L464" rel="#L464">464</span>
<span id="L465" rel="#L465">465</span>
<span id="L466" rel="#L466">466</span>
<span id="L467" rel="#L467">467</span>
<span id="L468" rel="#L468">468</span>
<span id="L469" rel="#L469">469</span>
<span id="L470" rel="#L470">470</span>
<span id="L471" rel="#L471">471</span>
<span id="L472" rel="#L472">472</span>
<span id="L473" rel="#L473">473</span>
<span id="L474" rel="#L474">474</span>
<span id="L475" rel="#L475">475</span>
<span id="L476" rel="#L476">476</span>
<span id="L477" rel="#L477">477</span>
<span id="L478" rel="#L478">478</span>
<span id="L479" rel="#L479">479</span>
<span id="L480" rel="#L480">480</span>
<span id="L481" rel="#L481">481</span>
<span id="L482" rel="#L482">482</span>
<span id="L483" rel="#L483">483</span>
<span id="L484" rel="#L484">484</span>
<span id="L485" rel="#L485">485</span>
<span id="L486" rel="#L486">486</span>
<span id="L487" rel="#L487">487</span>
<span id="L488" rel="#L488">488</span>
<span id="L489" rel="#L489">489</span>
<span id="L490" rel="#L490">490</span>
<span id="L491" rel="#L491">491</span>
<span id="L492" rel="#L492">492</span>
<span id="L493" rel="#L493">493</span>
<span id="L494" rel="#L494">494</span>
<span id="L495" rel="#L495">495</span>
<span id="L496" rel="#L496">496</span>
<span id="L497" rel="#L497">497</span>
<span id="L498" rel="#L498">498</span>
<span id="L499" rel="#L499">499</span>
<span id="L500" rel="#L500">500</span>
<span id="L501" rel="#L501">501</span>
<span id="L502" rel="#L502">502</span>
<span id="L503" rel="#L503">503</span>
<span id="L504" rel="#L504">504</span>
<span id="L505" rel="#L505">505</span>
<span id="L506" rel="#L506">506</span>
<span id="L507" rel="#L507">507</span>
<span id="L508" rel="#L508">508</span>
<span id="L509" rel="#L509">509</span>
<span id="L510" rel="#L510">510</span>
<span id="L511" rel="#L511">511</span>
<span id="L512" rel="#L512">512</span>
<span id="L513" rel="#L513">513</span>
<span id="L514" rel="#L514">514</span>
<span id="L515" rel="#L515">515</span>
<span id="L516" rel="#L516">516</span>
<span id="L517" rel="#L517">517</span>
<span id="L518" rel="#L518">518</span>
<span id="L519" rel="#L519">519</span>
<span id="L520" rel="#L520">520</span>
<span id="L521" rel="#L521">521</span>
<span id="L522" rel="#L522">522</span>
<span id="L523" rel="#L523">523</span>
<span id="L524" rel="#L524">524</span>
<span id="L525" rel="#L525">525</span>
<span id="L526" rel="#L526">526</span>
<span id="L527" rel="#L527">527</span>
<span id="L528" rel="#L528">528</span>
<span id="L529" rel="#L529">529</span>
<span id="L530" rel="#L530">530</span>
<span id="L531" rel="#L531">531</span>
<span id="L532" rel="#L532">532</span>
<span id="L533" rel="#L533">533</span>
<span id="L534" rel="#L534">534</span>
<span id="L535" rel="#L535">535</span>
<span id="L536" rel="#L536">536</span>
<span id="L537" rel="#L537">537</span>
<span id="L538" rel="#L538">538</span>
<span id="L539" rel="#L539">539</span>
<span id="L540" rel="#L540">540</span>
<span id="L541" rel="#L541">541</span>
<span id="L542" rel="#L542">542</span>
<span id="L543" rel="#L543">543</span>
<span id="L544" rel="#L544">544</span>
<span id="L545" rel="#L545">545</span>
<span id="L546" rel="#L546">546</span>
<span id="L547" rel="#L547">547</span>
<span id="L548" rel="#L548">548</span>
<span id="L549" rel="#L549">549</span>
<span id="L550" rel="#L550">550</span>
<span id="L551" rel="#L551">551</span>
<span id="L552" rel="#L552">552</span>
<span id="L553" rel="#L553">553</span>
<span id="L554" rel="#L554">554</span>
<span id="L555" rel="#L555">555</span>
<span id="L556" rel="#L556">556</span>
<span id="L557" rel="#L557">557</span>
<span id="L558" rel="#L558">558</span>
<span id="L559" rel="#L559">559</span>
<span id="L560" rel="#L560">560</span>
<span id="L561" rel="#L561">561</span>
<span id="L562" rel="#L562">562</span>
<span id="L563" rel="#L563">563</span>
<span id="L564" rel="#L564">564</span>
<span id="L565" rel="#L565">565</span>
<span id="L566" rel="#L566">566</span>
<span id="L567" rel="#L567">567</span>
<span id="L568" rel="#L568">568</span>
<span id="L569" rel="#L569">569</span>
<span id="L570" rel="#L570">570</span>
<span id="L571" rel="#L571">571</span>
<span id="L572" rel="#L572">572</span>
<span id="L573" rel="#L573">573</span>
<span id="L574" rel="#L574">574</span>
<span id="L575" rel="#L575">575</span>
<span id="L576" rel="#L576">576</span>
<span id="L577" rel="#L577">577</span>
<span id="L578" rel="#L578">578</span>
<span id="L579" rel="#L579">579</span>
<span id="L580" rel="#L580">580</span>
<span id="L581" rel="#L581">581</span>
<span id="L582" rel="#L582">582</span>
<span id="L583" rel="#L583">583</span>
<span id="L584" rel="#L584">584</span>
<span id="L585" rel="#L585">585</span>
<span id="L586" rel="#L586">586</span>
<span id="L587" rel="#L587">587</span>
<span id="L588" rel="#L588">588</span>
<span id="L589" rel="#L589">589</span>
<span id="L590" rel="#L590">590</span>
<span id="L591" rel="#L591">591</span>
<span id="L592" rel="#L592">592</span>
<span id="L593" rel="#L593">593</span>
<span id="L594" rel="#L594">594</span>
<span id="L595" rel="#L595">595</span>
<span id="L596" rel="#L596">596</span>
<span id="L597" rel="#L597">597</span>
<span id="L598" rel="#L598">598</span>
<span id="L599" rel="#L599">599</span>
<span id="L600" rel="#L600">600</span>
<span id="L601" rel="#L601">601</span>
<span id="L602" rel="#L602">602</span>
<span id="L603" rel="#L603">603</span>
<span id="L604" rel="#L604">604</span>
<span id="L605" rel="#L605">605</span>
<span id="L606" rel="#L606">606</span>
<span id="L607" rel="#L607">607</span>
<span id="L608" rel="#L608">608</span>
<span id="L609" rel="#L609">609</span>
<span id="L610" rel="#L610">610</span>
<span id="L611" rel="#L611">611</span>
<span id="L612" rel="#L612">612</span>
<span id="L613" rel="#L613">613</span>
<span id="L614" rel="#L614">614</span>
<span id="L615" rel="#L615">615</span>
<span id="L616" rel="#L616">616</span>
<span id="L617" rel="#L617">617</span>
<span id="L618" rel="#L618">618</span>
<span id="L619" rel="#L619">619</span>
<span id="L620" rel="#L620">620</span>
<span id="L621" rel="#L621">621</span>
<span id="L622" rel="#L622">622</span>
<span id="L623" rel="#L623">623</span>
<span id="L624" rel="#L624">624</span>
<span id="L625" rel="#L625">625</span>
<span id="L626" rel="#L626">626</span>
<span id="L627" rel="#L627">627</span>
<span id="L628" rel="#L628">628</span>
<span id="L629" rel="#L629">629</span>
<span id="L630" rel="#L630">630</span>
<span id="L631" rel="#L631">631</span>
<span id="L632" rel="#L632">632</span>
<span id="L633" rel="#L633">633</span>
<span id="L634" rel="#L634">634</span>
<span id="L635" rel="#L635">635</span>
<span id="L636" rel="#L636">636</span>
<span id="L637" rel="#L637">637</span>
<span id="L638" rel="#L638">638</span>
<span id="L639" rel="#L639">639</span>
<span id="L640" rel="#L640">640</span>
<span id="L641" rel="#L641">641</span>
<span id="L642" rel="#L642">642</span>
<span id="L643" rel="#L643">643</span>
<span id="L644" rel="#L644">644</span>
<span id="L645" rel="#L645">645</span>
<span id="L646" rel="#L646">646</span>
<span id="L647" rel="#L647">647</span>
<span id="L648" rel="#L648">648</span>
<span id="L649" rel="#L649">649</span>
<span id="L650" rel="#L650">650</span>
<span id="L651" rel="#L651">651</span>
<span id="L652" rel="#L652">652</span>
<span id="L653" rel="#L653">653</span>
<span id="L654" rel="#L654">654</span>
<span id="L655" rel="#L655">655</span>
<span id="L656" rel="#L656">656</span>
<span id="L657" rel="#L657">657</span>
<span id="L658" rel="#L658">658</span>
<span id="L659" rel="#L659">659</span>
<span id="L660" rel="#L660">660</span>
<span id="L661" rel="#L661">661</span>
<span id="L662" rel="#L662">662</span>
<span id="L663" rel="#L663">663</span>
<span id="L664" rel="#L664">664</span>
<span id="L665" rel="#L665">665</span>
<span id="L666" rel="#L666">666</span>
<span id="L667" rel="#L667">667</span>
<span id="L668" rel="#L668">668</span>
<span id="L669" rel="#L669">669</span>
<span id="L670" rel="#L670">670</span>
<span id="L671" rel="#L671">671</span>
<span id="L672" rel="#L672">672</span>
<span id="L673" rel="#L673">673</span>
<span id="L674" rel="#L674">674</span>
<span id="L675" rel="#L675">675</span>
<span id="L676" rel="#L676">676</span>
<span id="L677" rel="#L677">677</span>
<span id="L678" rel="#L678">678</span>
<span id="L679" rel="#L679">679</span>
<span id="L680" rel="#L680">680</span>
<span id="L681" rel="#L681">681</span>
<span id="L682" rel="#L682">682</span>
<span id="L683" rel="#L683">683</span>
<span id="L684" rel="#L684">684</span>
<span id="L685" rel="#L685">685</span>
<span id="L686" rel="#L686">686</span>
<span id="L687" rel="#L687">687</span>
<span id="L688" rel="#L688">688</span>
<span id="L689" rel="#L689">689</span>
<span id="L690" rel="#L690">690</span>
<span id="L691" rel="#L691">691</span>
<span id="L692" rel="#L692">692</span>
<span id="L693" rel="#L693">693</span>
<span id="L694" rel="#L694">694</span>
<span id="L695" rel="#L695">695</span>
<span id="L696" rel="#L696">696</span>
<span id="L697" rel="#L697">697</span>
<span id="L698" rel="#L698">698</span>
<span id="L699" rel="#L699">699</span>
<span id="L700" rel="#L700">700</span>
<span id="L701" rel="#L701">701</span>
<span id="L702" rel="#L702">702</span>
<span id="L703" rel="#L703">703</span>
<span id="L704" rel="#L704">704</span>
<span id="L705" rel="#L705">705</span>
<span id="L706" rel="#L706">706</span>
<span id="L707" rel="#L707">707</span>
<span id="L708" rel="#L708">708</span>
<span id="L709" rel="#L709">709</span>
<span id="L710" rel="#L710">710</span>
<span id="L711" rel="#L711">711</span>
<span id="L712" rel="#L712">712</span>
<span id="L713" rel="#L713">713</span>
<span id="L714" rel="#L714">714</span>
<span id="L715" rel="#L715">715</span>
<span id="L716" rel="#L716">716</span>
<span id="L717" rel="#L717">717</span>
<span id="L718" rel="#L718">718</span>
<span id="L719" rel="#L719">719</span>
<span id="L720" rel="#L720">720</span>
<span id="L721" rel="#L721">721</span>
<span id="L722" rel="#L722">722</span>
<span id="L723" rel="#L723">723</span>
<span id="L724" rel="#L724">724</span>
<span id="L725" rel="#L725">725</span>
<span id="L726" rel="#L726">726</span>
<span id="L727" rel="#L727">727</span>
<span id="L728" rel="#L728">728</span>
<span id="L729" rel="#L729">729</span>
<span id="L730" rel="#L730">730</span>
<span id="L731" rel="#L731">731</span>
<span id="L732" rel="#L732">732</span>
<span id="L733" rel="#L733">733</span>
<span id="L734" rel="#L734">734</span>
<span id="L735" rel="#L735">735</span>
<span id="L736" rel="#L736">736</span>
<span id="L737" rel="#L737">737</span>
<span id="L738" rel="#L738">738</span>
<span id="L739" rel="#L739">739</span>
<span id="L740" rel="#L740">740</span>
<span id="L741" rel="#L741">741</span>
<span id="L742" rel="#L742">742</span>
<span id="L743" rel="#L743">743</span>
<span id="L744" rel="#L744">744</span>
<span id="L745" rel="#L745">745</span>
<span id="L746" rel="#L746">746</span>
<span id="L747" rel="#L747">747</span>
<span id="L748" rel="#L748">748</span>
<span id="L749" rel="#L749">749</span>
<span id="L750" rel="#L750">750</span>
<span id="L751" rel="#L751">751</span>
<span id="L752" rel="#L752">752</span>
<span id="L753" rel="#L753">753</span>
<span id="L754" rel="#L754">754</span>
<span id="L755" rel="#L755">755</span>
<span id="L756" rel="#L756">756</span>
<span id="L757" rel="#L757">757</span>
<span id="L758" rel="#L758">758</span>
<span id="L759" rel="#L759">759</span>
<span id="L760" rel="#L760">760</span>
<span id="L761" rel="#L761">761</span>
<span id="L762" rel="#L762">762</span>
<span id="L763" rel="#L763">763</span>
<span id="L764" rel="#L764">764</span>
<span id="L765" rel="#L765">765</span>
<span id="L766" rel="#L766">766</span>
<span id="L767" rel="#L767">767</span>
<span id="L768" rel="#L768">768</span>
<span id="L769" rel="#L769">769</span>
<span id="L770" rel="#L770">770</span>
<span id="L771" rel="#L771">771</span>
<span id="L772" rel="#L772">772</span>
<span id="L773" rel="#L773">773</span>
<span id="L774" rel="#L774">774</span>
<span id="L775" rel="#L775">775</span>
<span id="L776" rel="#L776">776</span>
<span id="L777" rel="#L777">777</span>
<span id="L778" rel="#L778">778</span>
<span id="L779" rel="#L779">779</span>
<span id="L780" rel="#L780">780</span>
<span id="L781" rel="#L781">781</span>
<span id="L782" rel="#L782">782</span>
<span id="L783" rel="#L783">783</span>
<span id="L784" rel="#L784">784</span>
<span id="L785" rel="#L785">785</span>
<span id="L786" rel="#L786">786</span>
<span id="L787" rel="#L787">787</span>
<span id="L788" rel="#L788">788</span>
<span id="L789" rel="#L789">789</span>
<span id="L790" rel="#L790">790</span>
<span id="L791" rel="#L791">791</span>
<span id="L792" rel="#L792">792</span>
<span id="L793" rel="#L793">793</span>
<span id="L794" rel="#L794">794</span>
<span id="L795" rel="#L795">795</span>
<span id="L796" rel="#L796">796</span>
<span id="L797" rel="#L797">797</span>
<span id="L798" rel="#L798">798</span>
<span id="L799" rel="#L799">799</span>
<span id="L800" rel="#L800">800</span>
<span id="L801" rel="#L801">801</span>
</pre>
          </td>
          <td width="100%">
                <div class="highlight"><pre><div class='line' id='LC1'><span class="cm">/*</span></div><div class='line' id='LC2'><span class="cm"> * unyaffs: extract files from yaffs2 file system image to current directory</span></div><div class='line' id='LC3'><span class="cm"> *</span></div><div class='line' id='LC4'><span class="cm"> * Created by Kai Wei &lt;kai.wei.cn@gmail.com&gt;</span></div><div class='line' id='LC5'><span class="cm"> * Modified by Bernhard Ehlers &lt;be@bernhard-ehlers.de&gt;</span></div><div class='line' id='LC6'><span class="cm"> *</span></div><div class='line' id='LC7'><span class="cm"> * This program is free software; you can redistribute it and/or modify</span></div><div class='line' id='LC8'><span class="cm"> * it under the terms of the GNU General Public License version 2 as</span></div><div class='line' id='LC9'><span class="cm"> * published by the Free Software Foundation.</span></div><div class='line' id='LC10'><span class="cm"> */</span></div><div class='line' id='LC11'><br/></div><div class='line' id='LC12'><span class="cm">/*</span></div><div class='line' id='LC13'><span class="cm"> * History:</span></div><div class='line' id='LC14'><span class="cm"> * V0.1  2008-12-29</span></div><div class='line' id='LC15'><span class="cm"> *   Initial version uploaded to http://code.google.com/p/unyaffs/</span></div><div class='line' id='LC16'><span class="cm"> * V0.8  2011-08-25</span></div><div class='line' id='LC17'><span class="cm"> *   Fork created at https://github.com/ehlers/unyaffs</span></div><div class='line' id='LC18'><span class="cm"> *   Support of chunksizes from 2k to 16k</span></div><div class='line' id='LC19'><span class="cm"> *   Restore special files (device nodes)</span></div><div class='line' id='LC20'><span class="cm"> *   Restore file date and time</span></div><div class='line' id='LC21'><span class="cm"> *   Restore file ownership, when run as root</span></div><div class='line' id='LC22'><span class="cm"> *   File listing</span></div><div class='line' id='LC23'><span class="cm"> *   Much more error checking</span></div><div class='line' id='LC24'><span class="cm"> * V0.9  2011-09-03</span></div><div class='line' id='LC25'><span class="cm"> *   Allow - as filename for stdin</span></div><div class='line' id='LC26'><span class="cm"> *   Optional base dir for file extraction</span></div><div class='line' id='LC27'><span class="cm"> * V0.9.1  2012-04-12</span></div><div class='line' id='LC28'><span class="cm"> *   Additional flash layout: 8k chunk size, 448 byte spare</span></div><div class='line' id='LC29'><span class="cm"> * V0.9.2  2012-04-18</span></div><div class='line' id='LC30'><span class="cm"> *   Additional flash layout: 8k chunk size, 368 byte spare</span></div><div class='line' id='LC31'><span class="cm"> *   New options -c and -s to set chunk and spare size, obsoletes option -l</span></div><div class='line' id='LC32'><span class="cm"> *   Add support for bad block information in spare header.</span></div><div class='line' id='LC33'><span class="cm"> *   Allow first data chunk to be stored in image before file header.</span></div><div class='line' id='LC34'><span class="cm"> * V0.9.3  2012-04-30</span></div><div class='line' id='LC35'><span class="cm"> *   check result of lchown system call</span></div><div class='line' id='LC36'><span class="cm"> *   Code cleanup</span></div><div class='line' id='LC37'><span class="cm"> * V0.9.4  2012-05-01</span></div><div class='line' id='LC38'><span class="cm"> *   No predefined flash layouts, detect all possible layouts</span></div><div class='line' id='LC39'><span class="cm"> *   Option -d shows detected flash layout, no extraction</span></div><div class='line' id='LC40'><span class="cm"> */</span></div><div class='line' id='LC41'><br/></div><div class='line' id='LC42'><span class="cp">#define VERSION		&quot;0.9.4&quot;</span></div><div class='line' id='LC43'><br/></div><div class='line' id='LC44'><span class="cm">/* check if lutimes is available */</span></div><div class='line' id='LC45'><span class="cp">#if defined(__linux__) || defined(__FreeBSD__) || defined(__NetBSD__) || (defined(__APPLE__) &amp;&amp; defined(__MACH__))</span></div><div class='line' id='LC46'><span class="cp">#define HAS_LUTIMES 1</span></div><div class='line' id='LC47'><span class="cp">#endif</span></div><div class='line' id='LC48'><br/></div><div class='line' id='LC49'><span class="cp">#include &lt;sys/types.h&gt;</span></div><div class='line' id='LC50'><span class="cp">#include &lt;sys/stat.h&gt;</span></div><div class='line' id='LC51'><span class="cp">#include &lt;fcntl.h&gt;</span></div><div class='line' id='LC52'><span class="cp">#include &lt;unistd.h&gt;</span></div><div class='line' id='LC53'><span class="cp">#include &lt;stdio.h&gt;</span></div><div class='line' id='LC54'><span class="cp">#include &lt;string.h&gt;</span></div><div class='line' id='LC55'><span class="cp">#include &lt;stdlib.h&gt;</span></div><div class='line' id='LC56'><span class="cp">#include &lt;stddef.h&gt;</span></div><div class='line' id='LC57'><span class="cp">#include &lt;stdarg.h&gt;</span></div><div class='line' id='LC58'><span class="cp">#include &lt;time.h&gt;</span></div><div class='line' id='LC59'><span class="cp">#include &lt;errno.h&gt;</span></div><div class='line' id='LC60'><span class="cp">#ifdef HAS_LUTIMES</span></div><div class='line' id='LC61'><span class="cp">#include &lt;sys/time.h&gt;</span></div><div class='line' id='LC62'><span class="cp">#else</span></div><div class='line' id='LC63'><span class="cp">#include &lt;utime.h&gt;</span></div><div class='line' id='LC64'><span class="cp">#endif</span></div><div class='line' id='LC65'><br/></div><div class='line' id='LC66'><span class="cp">#include &quot;unyaffs.h&quot;</span></div><div class='line' id='LC67'><br/></div><div class='line' id='LC68'><span class="cp">#define MIN_CHUNK_SIZE		 2048</span></div><div class='line' id='LC69'><span class="cp">#define MAX_CHUNK_SIZE		16384</span></div><div class='line' id='LC70'><span class="cp">#define MIN_SPARE_SIZE		   64</span></div><div class='line' id='LC71'><span class="cp">#define MAX_SPARE_SIZE		  512</span></div><div class='line' id='LC72'><span class="cp">#define HASH_SIZE		 7001</span></div><div class='line' id='LC73'><span class="cp">#define MAX_WARN		   20</span></div><div class='line' id='LC74'><span class="cp">#define YAFFS_OBJECTID_ROOT	    1</span></div><div class='line' id='LC75'><br/></div><div class='line' id='LC76'><span class="cp">#define STD_PERMS		(S_IRWXU|S_IRWXG|S_IRWXO)</span></div><div class='line' id='LC77'><span class="cp">#define EXTRA_PERMS		(S_ISUID|S_ISGID|S_ISVTX)</span></div><div class='line' id='LC78'><br/></div><div class='line' id='LC79'><span class="kt">unsigned</span> <span class="kt">char</span> <span class="n">data</span><span class="p">[</span><span class="n">MAX_CHUNK_SIZE</span> <span class="o">+</span> <span class="n">MAX_SPARE_SIZE</span><span class="p">];</span></div><div class='line' id='LC80'><span class="kt">unsigned</span> <span class="kt">char</span> <span class="n">buffer</span><span class="p">[</span><span class="mi">4</span><span class="o">*</span><span class="p">(</span><span class="n">MAX_CHUNK_SIZE</span> <span class="o">+</span> <span class="n">MAX_SPARE_SIZE</span><span class="p">)];</span></div><div class='line' id='LC81'><span class="kt">unsigned</span> <span class="kt">char</span> <span class="o">*</span><span class="n">chunk_data</span> <span class="o">=</span> <span class="n">data</span><span class="p">;</span></div><div class='line' id='LC82'><span class="kt">unsigned</span> <span class="kt">char</span> <span class="o">*</span><span class="n">spare_data</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC83'><span class="kt">int</span> <span class="n">chunk_size</span> <span class="o">=</span> <span class="n">MIN_CHUNK_SIZE</span><span class="p">;</span></div><div class='line' id='LC84'><span class="kt">int</span> <span class="n">spare_size</span> <span class="o">=</span> <span class="n">MIN_SPARE_SIZE</span><span class="p">;</span></div><div class='line' id='LC85'><span class="kt">int</span> <span class="n">spare_off</span>  <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC86'><span class="kt">int</span> <span class="n">buf_len</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC87'><span class="kt">int</span> <span class="n">buf_idx</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC88'><span class="kt">int</span> <span class="n">chunk_no</span>   <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC89'><span class="kt">int</span> <span class="n">warn_count</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC90'><span class="kt">int</span> <span class="n">warn_chown</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC91'><span class="kt">int</span> <span class="n">img_file</span><span class="p">;</span></div><div class='line' id='LC92'><span class="kt">int</span> <span class="n">opt_list</span><span class="p">;</span></div><div class='line' id='LC93'><span class="kt">int</span> <span class="n">opt_verbose</span><span class="p">;</span></div><div class='line' id='LC94'><br/></div><div class='line' id='LC95'><span class="k">typedef</span> <span class="k">struct</span> <span class="n">_object</span> <span class="p">{</span></div><div class='line' id='LC96'>	<span class="kt">unsigned</span> <span class="n">id</span><span class="p">;</span></div><div class='line' id='LC97'>	<span class="k">struct</span> <span class="n">_object</span> <span class="o">*</span><span class="n">next</span><span class="p">;</span></div><div class='line' id='LC98'>	<span class="n">yaffs_ObjectType</span> <span class="n">type</span><span class="p">;</span></div><div class='line' id='LC99'>	<span class="kt">unsigned</span> <span class="n">prev_dir_id</span><span class="p">;</span></div><div class='line' id='LC100'>	<span class="n">__u32</span>    <span class="n">atime</span><span class="p">;</span></div><div class='line' id='LC101'>	<span class="n">__u32</span>    <span class="n">mtime</span><span class="p">;</span></div><div class='line' id='LC102'>	<span class="kt">char</span>     <span class="n">path_name</span><span class="p">[</span><span class="mi">1</span><span class="p">];</span>		<span class="cm">/* variable length, must be last */</span></div><div class='line' id='LC103'><span class="p">}</span> <span class="n">object</span><span class="p">;</span></div><div class='line' id='LC104'><br/></div><div class='line' id='LC105'><span class="n">object</span> <span class="o">*</span><span class="n">obj_list</span><span class="p">[</span><span class="n">HASH_SIZE</span><span class="p">];</span></div><div class='line' id='LC106'><br/></div><div class='line' id='LC107'><span class="kt">unsigned</span> <span class="n">last_dir_id</span><span class="p">;</span></div><div class='line' id='LC108'><br/></div><div class='line' id='LC109'><span class="kt">int</span> <span class="nf">set_utime</span><span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">filename</span><span class="p">,</span> <span class="n">__u32</span> <span class="n">yst_atime</span><span class="p">,</span> <span class="n">__u32</span> <span class="n">yst_mtime</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC110'><span class="cp">#ifdef HAS_LUTIMES</span></div><div class='line' id='LC111'>	<span class="k">struct</span> <span class="n">timeval</span> <span class="n">ftime</span><span class="p">[</span><span class="mi">2</span><span class="p">];</span></div><div class='line' id='LC112'><br/></div><div class='line' id='LC113'>	<span class="n">ftime</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">tv_sec</span>  <span class="o">=</span> <span class="n">yst_atime</span><span class="p">;</span></div><div class='line' id='LC114'>	<span class="n">ftime</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">tv_usec</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC115'>	<span class="n">ftime</span><span class="p">[</span><span class="mi">1</span><span class="p">].</span><span class="n">tv_sec</span>  <span class="o">=</span> <span class="n">yst_mtime</span><span class="p">;</span></div><div class='line' id='LC116'>	<span class="n">ftime</span><span class="p">[</span><span class="mi">1</span><span class="p">].</span><span class="n">tv_usec</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC117'><br/></div><div class='line' id='LC118'>	<span class="k">return</span> <span class="n">lutimes</span><span class="p">(</span><span class="n">filename</span><span class="p">,</span> <span class="n">ftime</span><span class="p">);</span></div><div class='line' id='LC119'><span class="cp">#else</span></div><div class='line' id='LC120'>	<span class="k">struct</span> <span class="n">utimbuf</span> <span class="n">ftime</span><span class="p">;</span></div><div class='line' id='LC121'><br/></div><div class='line' id='LC122'>	<span class="n">ftime</span><span class="p">.</span><span class="n">actime</span>  <span class="o">=</span> <span class="n">yst_atime</span><span class="p">;</span></div><div class='line' id='LC123'>	<span class="n">ftime</span><span class="p">.</span><span class="n">modtime</span> <span class="o">=</span> <span class="n">yst_mtime</span><span class="p">;</span></div><div class='line' id='LC124'><br/></div><div class='line' id='LC125'>	<span class="k">return</span> <span class="n">utime</span><span class="p">(</span><span class="n">filename</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">ftime</span><span class="p">);</span></div><div class='line' id='LC126'><span class="cp">#endif</span></div><div class='line' id='LC127'><span class="p">}</span></div><div class='line' id='LC128'><br/></div><div class='line' id='LC129'><span class="cm">/* error reporting function, similar to GNU error() */</span></div><div class='line' id='LC130'><span class="k">static</span> <span class="kt">void</span> <span class="nf">prt_err</span><span class="p">(</span><span class="kt">int</span> <span class="n">status</span><span class="p">,</span> <span class="kt">int</span> <span class="n">errnum</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">format</span><span class="p">,</span> <span class="p">...)</span> <span class="p">{</span></div><div class='line' id='LC131'>	<span class="kt">va_list</span> <span class="n">varg</span><span class="p">;</span></div><div class='line' id='LC132'><br/></div><div class='line' id='LC133'>	<span class="n">va_start</span><span class="p">(</span><span class="n">varg</span><span class="p">,</span> <span class="n">format</span><span class="p">);</span></div><div class='line' id='LC134'>	<span class="n">fflush</span><span class="p">(</span><span class="n">stdout</span><span class="p">);</span></div><div class='line' id='LC135'>	<span class="n">vfprintf</span><span class="p">(</span><span class="n">stderr</span><span class="p">,</span> <span class="n">format</span><span class="p">,</span> <span class="n">varg</span><span class="p">);</span></div><div class='line' id='LC136'>	<span class="k">if</span> <span class="p">(</span><span class="n">errnum</span> <span class="o">!=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC137'>		<span class="n">fprintf</span><span class="p">(</span><span class="n">stderr</span><span class="p">,</span> <span class="s">&quot;: %s&quot;</span><span class="p">,</span> <span class="n">strerror</span><span class="p">(</span><span class="n">errnum</span><span class="p">));</span></div><div class='line' id='LC138'>	<span class="n">fprintf</span><span class="p">(</span><span class="n">stderr</span><span class="p">,</span> <span class="s">&quot;</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC139'>	<span class="n">va_end</span><span class="p">(</span><span class="n">varg</span><span class="p">);</span></div><div class='line' id='LC140'><br/></div><div class='line' id='LC141'>	<span class="k">if</span> <span class="p">(</span><span class="n">status</span> <span class="o">!=</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC142'>		<span class="n">exit</span><span class="p">(</span><span class="n">status</span><span class="p">);</span></div><div class='line' id='LC143'><span class="p">}</span></div><div class='line' id='LC144'><br/></div><div class='line' id='LC145'><span class="cm">/* read function, which handles partial and interrupted reads */</span></div><div class='line' id='LC146'><span class="kt">ssize_t</span> <span class="nf">safe_read</span><span class="p">(</span><span class="kt">int</span> <span class="n">fd</span><span class="p">,</span> <span class="kt">void</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">len</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC147'>	<span class="kt">char</span> <span class="o">*</span><span class="n">ptr</span> <span class="o">=</span> <span class="n">buf</span><span class="p">;</span></div><div class='line' id='LC148'>	<span class="kt">ssize_t</span> <span class="n">offset</span><span class="p">,</span> <span class="n">ret</span><span class="p">;</span></div><div class='line' id='LC149'><br/></div><div class='line' id='LC150'>	<span class="n">offset</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC151'>	<span class="k">while</span> <span class="p">(</span><span class="n">offset</span> <span class="o">&lt;</span> <span class="n">len</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC152'>		<span class="n">ret</span> <span class="o">=</span> <span class="n">read</span><span class="p">(</span><span class="n">fd</span><span class="p">,</span> <span class="n">ptr</span><span class="o">+</span><span class="n">offset</span><span class="p">,</span> <span class="n">len</span><span class="o">-</span><span class="n">offset</span><span class="p">);</span></div><div class='line' id='LC153'>		<span class="k">if</span> <span class="p">(</span><span class="n">ret</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC154'>			<span class="k">if</span> <span class="p">(</span><span class="n">errno</span> <span class="o">!=</span> <span class="n">EAGAIN</span> <span class="o">&amp;&amp;</span> <span class="n">errno</span> <span class="o">!=</span> <span class="n">EINTR</span><span class="p">)</span></div><div class='line' id='LC155'>				<span class="k">return</span> <span class="o">-</span><span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC156'>		<span class="p">}</span> <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">ret</span> <span class="o">==</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC157'>			<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC158'>		<span class="k">else</span></div><div class='line' id='LC159'>			<span class="n">offset</span> <span class="o">+=</span> <span class="n">ret</span><span class="p">;</span></div><div class='line' id='LC160'>	<span class="p">}</span></div><div class='line' id='LC161'>	<span class="k">return</span> <span class="n">offset</span><span class="p">;</span></div><div class='line' id='LC162'><span class="p">}</span></div><div class='line' id='LC163'><br/></div><div class='line' id='LC164'><span class="cm">/* write function, which handles partial and interrupted writes */</span></div><div class='line' id='LC165'><span class="kt">ssize_t</span> <span class="nf">safe_write</span><span class="p">(</span><span class="kt">int</span> <span class="n">fd</span><span class="p">,</span> <span class="kt">void</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">len</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC166'>	<span class="kt">char</span> <span class="o">*</span><span class="n">ptr</span> <span class="o">=</span> <span class="n">buf</span><span class="p">;</span></div><div class='line' id='LC167'>	<span class="kt">ssize_t</span> <span class="n">offset</span><span class="p">,</span> <span class="n">ret</span><span class="p">;</span></div><div class='line' id='LC168'><br/></div><div class='line' id='LC169'>	<span class="n">offset</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC170'>	<span class="k">while</span> <span class="p">(</span><span class="n">offset</span> <span class="o">&lt;</span> <span class="n">len</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC171'>		<span class="n">ret</span> <span class="o">=</span> <span class="n">write</span><span class="p">(</span><span class="n">fd</span><span class="p">,</span> <span class="n">ptr</span><span class="o">+</span><span class="n">offset</span><span class="p">,</span> <span class="n">len</span><span class="o">-</span><span class="n">offset</span><span class="p">);</span></div><div class='line' id='LC172'>		<span class="k">if</span> <span class="p">(</span><span class="n">ret</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC173'>			<span class="k">if</span> <span class="p">(</span><span class="n">errno</span> <span class="o">!=</span> <span class="n">EAGAIN</span> <span class="o">&amp;&amp;</span> <span class="n">errno</span> <span class="o">!=</span> <span class="n">EINTR</span><span class="p">)</span></div><div class='line' id='LC174'>				<span class="k">return</span> <span class="o">-</span><span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC175'>		<span class="p">}</span> <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">ret</span> <span class="o">==</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC176'>			<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC177'>		<span class="k">else</span></div><div class='line' id='LC178'>			<span class="n">offset</span> <span class="o">+=</span> <span class="n">ret</span><span class="p">;</span></div><div class='line' id='LC179'>	<span class="p">}</span></div><div class='line' id='LC180'>	<span class="k">return</span> <span class="n">offset</span><span class="p">;</span></div><div class='line' id='LC181'><span class="p">}</span></div><div class='line' id='LC182'><br/></div><div class='line' id='LC183'><span class="cm">/*</span></div><div class='line' id='LC184'><span class="cm"> * mkdirpath - creates directories including intermediate dirs</span></div><div class='line' id='LC185'><span class="cm"> */</span></div><div class='line' id='LC186'><span class="k">static</span> <span class="kt">int</span> <span class="nf">mkdirpath</span><span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">name</span><span class="p">,</span> <span class="n">mode_t</span> <span class="n">mode</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC187'>	<span class="k">struct</span> <span class="n">stat</span> <span class="n">st</span><span class="p">;</span></div><div class='line' id='LC188'>	<span class="kt">char</span> <span class="o">*</span><span class="n">cp</span><span class="p">;</span></div><div class='line' id='LC189'>	<span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">;</span></div><div class='line' id='LC190'><br/></div><div class='line' id='LC191'>	<span class="k">if</span> <span class="p">((</span><span class="n">buf</span> <span class="o">=</span> <span class="n">malloc</span><span class="p">(</span><span class="n">strlen</span><span class="p">(</span><span class="n">name</span><span class="p">)</span><span class="o">+</span><span class="mi">1</span><span class="p">))</span> <span class="o">==</span> <span class="nb">NULL</span><span class="p">)</span></div><div class='line' id='LC192'>		<span class="p">{</span> <span class="n">errno</span> <span class="o">=</span> <span class="n">ENOMEM</span><span class="p">;</span> <span class="k">return</span> <span class="o">-</span><span class="mi">1</span><span class="p">;</span> <span class="p">}</span></div><div class='line' id='LC193'>	<span class="n">strcpy</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="n">name</span><span class="p">);</span></div><div class='line' id='LC194'>	<span class="n">cp</span> <span class="o">=</span> <span class="n">buf</span><span class="p">;</span></div><div class='line' id='LC195'>	<span class="k">while</span> <span class="p">((</span><span class="n">cp</span> <span class="o">=</span> <span class="n">strchr</span><span class="p">(</span><span class="n">cp</span><span class="p">,</span> <span class="sc">&#39;/&#39;</span><span class="p">))</span> <span class="o">!=</span> <span class="nb">NULL</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC196'>		<span class="o">*</span><span class="n">cp</span> <span class="o">=</span> <span class="sc">&#39;\0&#39;</span><span class="p">;</span></div><div class='line' id='LC197'>		<span class="n">mkdir</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="mo">0755</span><span class="p">);</span></div><div class='line' id='LC198'>		<span class="o">*</span><span class="n">cp</span><span class="o">++</span> <span class="o">=</span> <span class="sc">&#39;/&#39;</span><span class="p">;</span></div><div class='line' id='LC199'>	<span class="p">}</span></div><div class='line' id='LC200'>	<span class="n">free</span><span class="p">(</span><span class="n">buf</span><span class="p">);</span></div><div class='line' id='LC201'><br/></div><div class='line' id='LC202'>	<span class="k">if</span> <span class="p">(</span><span class="n">mkdir</span><span class="p">(</span><span class="n">name</span><span class="p">,</span> <span class="n">mode</span><span class="p">)</span> <span class="o">&lt;</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span></div><div class='line' id='LC203'>	    <span class="p">(</span><span class="n">stat</span><span class="p">(</span><span class="n">name</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">st</span><span class="p">)</span> <span class="o">&lt;</span> <span class="mi">0</span> <span class="o">||</span> <span class="o">!</span><span class="n">S_ISDIR</span><span class="p">(</span><span class="n">st</span><span class="p">.</span><span class="n">st_mode</span><span class="p">)))</span></div><div class='line' id='LC204'>		<span class="k">return</span> <span class="o">-</span><span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC205'><br/></div><div class='line' id='LC206'>	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC207'><span class="p">}</span></div><div class='line' id='LC208'><br/></div><div class='line' id='LC209'><span class="cm">/*</span></div><div class='line' id='LC210'><span class="cm"> * save_lchown - call lchown and check result</span></div><div class='line' id='LC211'><span class="cm"> */</span></div><div class='line' id='LC212'><span class="k">static</span> <span class="kt">void</span> <span class="nf">safe_lchown</span><span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">path</span><span class="p">,</span> <span class="n">uid_t</span> <span class="n">owner</span><span class="p">,</span> <span class="n">gid_t</span> <span class="n">group</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC213'>	<span class="k">if</span> <span class="p">(</span><span class="n">lchown</span><span class="p">(</span><span class="n">path</span><span class="p">,</span> <span class="n">owner</span><span class="p">,</span> <span class="n">group</span><span class="p">)</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC214'>		<span class="k">if</span> <span class="p">(</span><span class="n">errno</span> <span class="o">==</span> <span class="n">EPERM</span> <span class="o">||</span> <span class="n">errno</span> <span class="o">==</span> <span class="n">EINVAL</span><span class="p">)</span></div><div class='line' id='LC215'>			<span class="n">warn_chown</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC216'>		<span class="k">else</span></div><div class='line' id='LC217'>			<span class="n">prt_err</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="n">errno</span><span class="p">,</span> <span class="s">&quot;Can&#39;t chown %s&quot;</span><span class="p">,</span> <span class="n">path</span><span class="p">);</span></div><div class='line' id='LC218'>	<span class="p">}</span></div><div class='line' id='LC219'><span class="p">}</span></div><div class='line' id='LC220'><br/></div><div class='line' id='LC221'><span class="k">static</span> <span class="kt">void</span> <span class="nf">init_obj_list</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC222'>	<span class="n">object</span> <span class="o">*</span><span class="n">obj</span><span class="p">;</span></div><div class='line' id='LC223'>	<span class="kt">unsigned</span> <span class="n">idx</span><span class="p">;</span></div><div class='line' id='LC224'><br/></div><div class='line' id='LC225'>	<span class="k">for</span> <span class="p">(</span><span class="n">idx</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">idx</span> <span class="o">&lt;</span> <span class="n">HASH_SIZE</span><span class="p">;</span> <span class="n">idx</span><span class="o">++</span><span class="p">)</span></div><div class='line' id='LC226'>		<span class="n">obj_list</span><span class="p">[</span><span class="n">idx</span><span class="p">]</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC227'>	<span class="n">last_dir_id</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC228'><br/></div><div class='line' id='LC229'>	<span class="n">obj</span> <span class="o">=</span> <span class="n">malloc</span><span class="p">(</span><span class="n">offsetof</span><span class="p">(</span><span class="n">object</span><span class="p">,</span> <span class="n">path_name</span><span class="p">)</span> <span class="o">+</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC230'>	<span class="k">if</span> <span class="p">(</span><span class="n">obj</span> <span class="o">==</span> <span class="nb">NULL</span><span class="p">)</span></div><div class='line' id='LC231'>		<span class="n">prt_err</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="s">&quot;Malloc struct object failed.&quot;</span><span class="p">);</span></div><div class='line' id='LC232'><br/></div><div class='line' id='LC233'>	<span class="n">obj</span><span class="o">-&gt;</span><span class="n">id</span> <span class="o">=</span> <span class="n">YAFFS_OBJECTID_ROOT</span><span class="p">;</span></div><div class='line' id='LC234'>	<span class="n">obj</span><span class="o">-&gt;</span><span class="n">type</span> <span class="o">=</span> <span class="n">YAFFS_OBJECT_TYPE_DIRECTORY</span><span class="p">;</span></div><div class='line' id='LC235'>	<span class="n">obj</span><span class="o">-&gt;</span><span class="n">prev_dir_id</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC236'>	<span class="n">obj</span><span class="o">-&gt;</span><span class="n">atime</span> <span class="o">=</span> <span class="n">obj</span><span class="o">-&gt;</span><span class="n">mtime</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC237'>	<span class="n">strcpy</span><span class="p">(</span><span class="n">obj</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">,</span> <span class="s">&quot;.&quot;</span><span class="p">);</span></div><div class='line' id='LC238'>	<span class="n">idx</span> <span class="o">=</span> <span class="n">obj</span><span class="o">-&gt;</span><span class="n">id</span> <span class="o">%</span> <span class="n">HASH_SIZE</span><span class="p">;</span></div><div class='line' id='LC239'>	<span class="n">obj</span><span class="o">-&gt;</span><span class="n">next</span> <span class="o">=</span> <span class="n">obj_list</span><span class="p">[</span><span class="n">idx</span><span class="p">];</span></div><div class='line' id='LC240'>	<span class="n">obj_list</span><span class="p">[</span><span class="n">idx</span><span class="p">]</span> <span class="o">=</span> <span class="n">obj</span><span class="p">;</span></div><div class='line' id='LC241'><span class="p">}</span></div><div class='line' id='LC242'><br/></div><div class='line' id='LC243'><span class="k">static</span> <span class="n">object</span> <span class="o">*</span><span class="nf">get_object</span><span class="p">(</span><span class="kt">unsigned</span> <span class="n">id</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC244'>	<span class="n">object</span> <span class="o">*</span><span class="n">obj</span><span class="p">;</span></div><div class='line' id='LC245'><br/></div><div class='line' id='LC246'>	<span class="n">obj</span> <span class="o">=</span> <span class="n">obj_list</span><span class="p">[</span><span class="n">id</span> <span class="o">%</span> <span class="n">HASH_SIZE</span><span class="p">];</span></div><div class='line' id='LC247'>	<span class="k">while</span> <span class="p">(</span><span class="n">obj</span> <span class="o">!=</span> <span class="nb">NULL</span> <span class="o">&amp;&amp;</span> <span class="n">obj</span><span class="o">-&gt;</span><span class="n">id</span> <span class="o">!=</span> <span class="n">id</span><span class="p">)</span></div><div class='line' id='LC248'>		<span class="n">obj</span> <span class="o">=</span> <span class="n">obj</span><span class="o">-&gt;</span><span class="n">next</span><span class="p">;</span></div><div class='line' id='LC249'>	<span class="k">return</span> <span class="n">obj</span><span class="p">;</span></div><div class='line' id='LC250'><span class="p">}</span></div><div class='line' id='LC251'><br/></div><div class='line' id='LC252'><span class="k">static</span> <span class="n">object</span> <span class="o">*</span><span class="nf">add_object</span><span class="p">(</span><span class="n">yaffs_ObjectHeader</span> <span class="o">*</span><span class="n">oh</span><span class="p">,</span> <span class="n">yaffs_PackedTags2</span> <span class="o">*</span><span class="n">pt</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC253'>	<span class="n">object</span> <span class="o">*</span><span class="n">obj</span><span class="p">,</span> <span class="o">*</span><span class="n">parent</span><span class="p">;</span></div><div class='line' id='LC254'>	<span class="kt">unsigned</span> <span class="n">idx</span><span class="p">;</span></div><div class='line' id='LC255'><br/></div><div class='line' id='LC256'>	<span class="n">obj</span> <span class="o">=</span> <span class="n">get_object</span><span class="p">(</span><span class="n">pt</span><span class="o">-&gt;</span><span class="n">t</span><span class="p">.</span><span class="n">objectId</span><span class="p">);</span></div><div class='line' id='LC257'>	<span class="k">if</span> <span class="p">(</span><span class="n">pt</span><span class="o">-&gt;</span><span class="n">t</span><span class="p">.</span><span class="n">objectId</span> <span class="o">==</span> <span class="n">YAFFS_OBJECTID_ROOT</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC258'>		<span class="k">if</span> <span class="p">(</span><span class="n">obj</span> <span class="o">==</span> <span class="nb">NULL</span><span class="p">)</span></div><div class='line' id='LC259'>			<span class="n">prt_err</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="s">&quot;Missing root object&quot;</span><span class="p">);</span></div><div class='line' id='LC260'>		<span class="k">if</span> <span class="p">(</span><span class="n">oh</span><span class="o">-&gt;</span><span class="n">type</span> <span class="o">!=</span> <span class="n">YAFFS_OBJECT_TYPE_DIRECTORY</span><span class="p">)</span></div><div class='line' id='LC261'>			<span class="n">prt_err</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="s">&quot;Root object must be directory&quot;</span><span class="p">);</span></div><div class='line' id='LC262'>		<span class="k">if</span> <span class="p">(</span><span class="n">last_dir_id</span> <span class="o">==</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC263'>			<span class="n">last_dir_id</span> <span class="o">=</span> <span class="n">YAFFS_OBJECTID_ROOT</span><span class="p">;</span></div><div class='line' id='LC264'>	<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC265'>		<span class="k">if</span> <span class="p">(</span><span class="n">oh</span><span class="o">-&gt;</span><span class="n">type</span> <span class="o">!=</span> <span class="n">YAFFS_OBJECT_TYPE_FILE</span> <span class="o">&amp;&amp;</span></div><div class='line' id='LC266'>		    <span class="n">oh</span><span class="o">-&gt;</span><span class="n">type</span> <span class="o">!=</span> <span class="n">YAFFS_OBJECT_TYPE_DIRECTORY</span> <span class="o">&amp;&amp;</span></div><div class='line' id='LC267'>		    <span class="n">oh</span><span class="o">-&gt;</span><span class="n">type</span> <span class="o">!=</span> <span class="n">YAFFS_OBJECT_TYPE_SYMLINK</span> <span class="o">&amp;&amp;</span></div><div class='line' id='LC268'>		    <span class="n">oh</span><span class="o">-&gt;</span><span class="n">type</span> <span class="o">!=</span> <span class="n">YAFFS_OBJECT_TYPE_HARDLINK</span> <span class="o">&amp;&amp;</span></div><div class='line' id='LC269'>		    <span class="n">oh</span><span class="o">-&gt;</span><span class="n">type</span> <span class="o">!=</span> <span class="n">YAFFS_OBJECT_TYPE_SPECIAL</span> <span class="o">&amp;&amp;</span></div><div class='line' id='LC270'>		    <span class="n">oh</span><span class="o">-&gt;</span><span class="n">type</span> <span class="o">!=</span> <span class="n">YAFFS_OBJECT_TYPE_UNKNOWN</span><span class="p">)</span></div><div class='line' id='LC271'>			<span class="n">prt_err</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="s">&quot;Illegal type %d in object %u (%s)&quot;</span><span class="p">,</span></div><div class='line' id='LC272'>			        <span class="n">oh</span><span class="o">-&gt;</span><span class="n">type</span><span class="p">,</span> <span class="n">pt</span><span class="o">-&gt;</span><span class="n">t</span><span class="p">.</span><span class="n">objectId</span><span class="p">,</span> <span class="n">oh</span><span class="o">-&gt;</span><span class="n">name</span><span class="p">);</span></div><div class='line' id='LC273'>		<span class="k">if</span> <span class="p">(</span><span class="n">oh</span><span class="o">-&gt;</span><span class="n">name</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span> <span class="o">==</span> <span class="sc">&#39;\0&#39;</span> <span class="o">||</span> <span class="n">strchr</span><span class="p">(</span><span class="n">oh</span><span class="o">-&gt;</span><span class="n">name</span><span class="p">,</span> <span class="sc">&#39;/&#39;</span><span class="p">)</span> <span class="o">!=</span> <span class="nb">NULL</span> <span class="o">||</span></div><div class='line' id='LC274'>		    <span class="n">strcmp</span><span class="p">(</span><span class="n">oh</span><span class="o">-&gt;</span><span class="n">name</span><span class="p">,</span> <span class="s">&quot;.&quot;</span><span class="p">)</span> <span class="o">==</span> <span class="mi">0</span> <span class="o">||</span> <span class="n">strcmp</span><span class="p">(</span><span class="n">oh</span><span class="o">-&gt;</span><span class="n">name</span><span class="p">,</span> <span class="s">&quot;..&quot;</span><span class="p">)</span> <span class="o">==</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC275'>			<span class="n">prt_err</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="s">&quot;Illegal file name %s in object %u&quot;</span><span class="p">,</span></div><div class='line' id='LC276'>			        <span class="n">oh</span><span class="o">-&gt;</span><span class="n">name</span><span class="p">,</span> <span class="n">pt</span><span class="o">-&gt;</span><span class="n">t</span><span class="p">.</span><span class="n">objectId</span><span class="p">);</span></div><div class='line' id='LC277'>		<span class="k">if</span> <span class="p">(</span><span class="n">obj</span> <span class="o">!=</span> <span class="nb">NULL</span><span class="p">)</span></div><div class='line' id='LC278'>			<span class="n">prt_err</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="s">&quot;Duplicate objectId %u&quot;</span><span class="p">,</span> <span class="n">pt</span><span class="o">-&gt;</span><span class="n">t</span><span class="p">.</span><span class="n">objectId</span><span class="p">);</span></div><div class='line' id='LC279'>		<span class="n">parent</span> <span class="o">=</span> <span class="n">get_object</span><span class="p">(</span><span class="n">oh</span><span class="o">-&gt;</span><span class="n">parentObjectId</span><span class="p">);</span></div><div class='line' id='LC280'>		<span class="k">if</span> <span class="p">(</span><span class="n">parent</span> <span class="o">==</span> <span class="nb">NULL</span><span class="p">)</span></div><div class='line' id='LC281'>			<span class="n">prt_err</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="s">&quot;Invalid parentObjectId %u in object %u (%s)&quot;</span><span class="p">,</span></div><div class='line' id='LC282'>			        <span class="n">oh</span><span class="o">-&gt;</span><span class="n">parentObjectId</span><span class="p">,</span> <span class="n">pt</span><span class="o">-&gt;</span><span class="n">t</span><span class="p">.</span><span class="n">objectId</span><span class="p">,</span> <span class="n">oh</span><span class="o">-&gt;</span><span class="n">name</span><span class="p">);</span></div><div class='line' id='LC283'>		<span class="k">if</span> <span class="p">(</span><span class="n">parent</span><span class="o">-&gt;</span><span class="n">type</span> <span class="o">!=</span> <span class="n">YAFFS_OBJECT_TYPE_DIRECTORY</span><span class="p">)</span></div><div class='line' id='LC284'>			<span class="n">prt_err</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="n">ENOTDIR</span><span class="p">,</span> <span class="s">&quot;File %s can&#39;t be created in %s&quot;</span><span class="p">,</span></div><div class='line' id='LC285'>			        <span class="n">oh</span><span class="o">-&gt;</span><span class="n">name</span><span class="p">,</span> <span class="n">parent</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">);</span></div><div class='line' id='LC286'>		<span class="n">obj</span> <span class="o">=</span> <span class="n">malloc</span><span class="p">(</span><span class="n">offsetof</span><span class="p">(</span><span class="n">object</span><span class="p">,</span> <span class="n">path_name</span><span class="p">)</span> <span class="o">+</span></div><div class='line' id='LC287'>		             <span class="n">strlen</span><span class="p">(</span><span class="n">parent</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">)</span> <span class="o">+</span> <span class="n">strlen</span><span class="p">(</span><span class="n">oh</span><span class="o">-&gt;</span><span class="n">name</span><span class="p">)</span> <span class="o">+</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC288'>		<span class="k">if</span> <span class="p">(</span><span class="n">obj</span> <span class="o">==</span> <span class="nb">NULL</span><span class="p">)</span></div><div class='line' id='LC289'>			<span class="n">prt_err</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="s">&quot;Malloc struct object failed.&quot;</span><span class="p">);</span></div><div class='line' id='LC290'><br/></div><div class='line' id='LC291'>		<span class="n">obj</span><span class="o">-&gt;</span><span class="n">id</span> <span class="o">=</span> <span class="n">pt</span><span class="o">-&gt;</span><span class="n">t</span><span class="p">.</span><span class="n">objectId</span><span class="p">;</span></div><div class='line' id='LC292'>		<span class="n">obj</span><span class="o">-&gt;</span><span class="n">type</span> <span class="o">=</span> <span class="n">oh</span><span class="o">-&gt;</span><span class="n">type</span><span class="p">;</span></div><div class='line' id='LC293'>		<span class="k">if</span> <span class="p">(</span><span class="n">obj</span><span class="o">-&gt;</span><span class="n">type</span> <span class="o">==</span> <span class="n">YAFFS_OBJECT_TYPE_DIRECTORY</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC294'>			<span class="n">obj</span><span class="o">-&gt;</span><span class="n">prev_dir_id</span> <span class="o">=</span> <span class="n">last_dir_id</span><span class="p">;</span></div><div class='line' id='LC295'>			<span class="n">last_dir_id</span> <span class="o">=</span> <span class="n">obj</span><span class="o">-&gt;</span><span class="n">id</span><span class="p">;</span></div><div class='line' id='LC296'>		<span class="p">}</span> <span class="k">else</span></div><div class='line' id='LC297'>			<span class="n">obj</span><span class="o">-&gt;</span><span class="n">prev_dir_id</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC298'>		<span class="k">if</span> <span class="p">(</span><span class="n">strcmp</span><span class="p">(</span><span class="n">parent</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">,</span> <span class="s">&quot;.&quot;</span><span class="p">)</span> <span class="o">==</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC299'>			<span class="n">strcpy</span><span class="p">(</span><span class="n">obj</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">,</span> <span class="n">oh</span><span class="o">-&gt;</span><span class="n">name</span><span class="p">);</span></div><div class='line' id='LC300'>		<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC301'>			<span class="n">strcpy</span><span class="p">(</span><span class="n">obj</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">,</span> <span class="n">parent</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">);</span></div><div class='line' id='LC302'>			<span class="n">strcat</span><span class="p">(</span><span class="n">obj</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">,</span> <span class="s">&quot;/&quot;</span><span class="p">);</span></div><div class='line' id='LC303'>			<span class="n">strcat</span><span class="p">(</span><span class="n">obj</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">,</span> <span class="n">oh</span><span class="o">-&gt;</span><span class="n">name</span><span class="p">);</span></div><div class='line' id='LC304'>		<span class="p">}</span></div><div class='line' id='LC305'>		<span class="n">idx</span> <span class="o">=</span> <span class="n">obj</span><span class="o">-&gt;</span><span class="n">id</span> <span class="o">%</span> <span class="n">HASH_SIZE</span><span class="p">;</span></div><div class='line' id='LC306'>		<span class="n">obj</span><span class="o">-&gt;</span><span class="n">next</span> <span class="o">=</span> <span class="n">obj_list</span><span class="p">[</span><span class="n">idx</span><span class="p">];</span></div><div class='line' id='LC307'>		<span class="n">obj_list</span><span class="p">[</span><span class="n">idx</span><span class="p">]</span> <span class="o">=</span> <span class="n">obj</span><span class="p">;</span></div><div class='line' id='LC308'>	<span class="p">}</span></div><div class='line' id='LC309'><br/></div><div class='line' id='LC310'>	<span class="n">obj</span><span class="o">-&gt;</span><span class="n">atime</span> <span class="o">=</span> <span class="n">oh</span><span class="o">-&gt;</span><span class="n">yst_atime</span><span class="p">;</span></div><div class='line' id='LC311'>	<span class="n">obj</span><span class="o">-&gt;</span><span class="n">mtime</span> <span class="o">=</span> <span class="n">oh</span><span class="o">-&gt;</span><span class="n">yst_mtime</span><span class="p">;</span></div><div class='line' id='LC312'><br/></div><div class='line' id='LC313'>	<span class="k">return</span> <span class="n">obj</span><span class="p">;</span></div><div class='line' id='LC314'><span class="p">}</span></div><div class='line' id='LC315'><br/></div><div class='line' id='LC316'><span class="kt">void</span> <span class="nf">set_dirs_utime</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC317'>	<span class="kt">unsigned</span> <span class="n">id</span><span class="p">;</span></div><div class='line' id='LC318'>	<span class="n">object</span> <span class="o">*</span><span class="n">obj</span><span class="p">;</span></div><div class='line' id='LC319'><br/></div><div class='line' id='LC320'>	<span class="n">id</span> <span class="o">=</span> <span class="n">last_dir_id</span><span class="p">;</span></div><div class='line' id='LC321'>	<span class="k">while</span> <span class="p">(</span><span class="n">id</span> <span class="o">!=</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span> <span class="p">(</span><span class="n">obj</span> <span class="o">=</span> <span class="n">get_object</span><span class="p">(</span><span class="n">id</span><span class="p">))</span> <span class="o">!=</span> <span class="nb">NULL</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC322'>		<span class="n">set_utime</span><span class="p">(</span><span class="n">obj</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">,</span> <span class="n">obj</span><span class="o">-&gt;</span><span class="n">atime</span><span class="p">,</span> <span class="n">obj</span><span class="o">-&gt;</span><span class="n">mtime</span><span class="p">);</span></div><div class='line' id='LC323'>		<span class="n">id</span> <span class="o">=</span> <span class="n">obj</span><span class="o">-&gt;</span><span class="n">prev_dir_id</span><span class="p">;</span></div><div class='line' id='LC324'>	<span class="p">}</span></div><div class='line' id='LC325'><span class="p">}</span></div><div class='line' id='LC326'><br/></div><div class='line' id='LC327'><span class="k">static</span> <span class="kt">void</span> <span class="nf">prt_node</span><span class="p">(</span><span class="kt">char</span> <span class="o">*</span><span class="n">name</span><span class="p">,</span> <span class="n">yaffs_ObjectHeader</span> <span class="o">*</span><span class="n">oh</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC328'>	<span class="n">object</span> <span class="o">*</span><span class="n">eq_obj</span><span class="p">;</span></div><div class='line' id='LC329'>	<span class="k">struct</span> <span class="n">tm</span> <span class="n">tm</span><span class="p">;</span></div><div class='line' id='LC330'>	<span class="kt">time_t</span> <span class="n">mtime</span><span class="p">;</span></div><div class='line' id='LC331'>	<span class="n">mode_t</span> <span class="n">mode</span><span class="p">;</span></div><div class='line' id='LC332'>	<span class="kt">char</span> <span class="n">type</span><span class="p">;</span></div><div class='line' id='LC333'>	<span class="kt">char</span> <span class="n">fsize</span><span class="p">[</span><span class="mi">16</span><span class="p">];</span></div><div class='line' id='LC334'>	<span class="kt">char</span> <span class="n">perm</span><span class="p">[</span><span class="mi">10</span><span class="p">];</span></div><div class='line' id='LC335'><br/></div><div class='line' id='LC336'>	<span class="cm">/* get file type, size, mtine and mode */</span></div><div class='line' id='LC337'>	<span class="n">eq_obj</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC338'>	<span class="n">strcpy</span><span class="p">(</span><span class="n">fsize</span><span class="p">,</span> <span class="s">&quot;0&quot;</span><span class="p">);</span></div><div class='line' id='LC339'>	<span class="n">mtime</span> <span class="o">=</span> <span class="n">oh</span><span class="o">-&gt;</span><span class="n">yst_mtime</span><span class="p">;</span></div><div class='line' id='LC340'>	<span class="n">mode</span>  <span class="o">=</span> <span class="n">oh</span><span class="o">-&gt;</span><span class="n">yst_mode</span><span class="p">;</span></div><div class='line' id='LC341'>	<span class="k">switch</span><span class="p">(</span><span class="n">oh</span><span class="o">-&gt;</span><span class="n">type</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC342'>		<span class="k">case</span> <span class="n">YAFFS_OBJECT_TYPE_FILE</span>:		<span class="n">type</span> <span class="o">=</span> <span class="sc">&#39;-&#39;</span><span class="p">;</span></div><div class='line' id='LC343'>			<span class="n">snprintf</span><span class="p">(</span><span class="n">fsize</span><span class="p">,</span> <span class="k">sizeof</span><span class="p">(</span><span class="n">fsize</span><span class="p">),</span> <span class="s">&quot;%d&quot;</span><span class="p">,</span> <span class="n">oh</span><span class="o">-&gt;</span><span class="n">fileSize</span><span class="p">);</span></div><div class='line' id='LC344'>			<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC345'>		<span class="k">case</span> <span class="n">YAFFS_OBJECT_TYPE_DIRECTORY</span>:	<span class="n">type</span> <span class="o">=</span> <span class="sc">&#39;d&#39;</span><span class="p">;</span> <span class="k">break</span><span class="p">;</span></div><div class='line' id='LC346'>		<span class="k">case</span> <span class="n">YAFFS_OBJECT_TYPE_SYMLINK</span>:		<span class="n">type</span> <span class="o">=</span> <span class="sc">&#39;l&#39;</span><span class="p">;</span> <span class="k">break</span><span class="p">;</span></div><div class='line' id='LC347'>		<span class="k">case</span> <span class="n">YAFFS_OBJECT_TYPE_HARDLINK</span>:	<span class="n">type</span> <span class="o">=</span> <span class="sc">&#39;h&#39;</span><span class="p">;</span></div><div class='line' id='LC348'>			<span class="n">eq_obj</span> <span class="o">=</span> <span class="n">get_object</span><span class="p">(</span><span class="n">oh</span><span class="o">-&gt;</span><span class="n">equivalentObjectId</span><span class="p">);</span></div><div class='line' id='LC349'>			<span class="n">mtime</span> <span class="o">=</span> <span class="n">eq_obj</span> <span class="o">!=</span> <span class="nb">NULL</span> <span class="o">?</span> <span class="n">eq_obj</span><span class="o">-&gt;</span><span class="n">mtime</span> <span class="o">:</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC350'>			<span class="n">mode</span> <span class="o">=</span> <span class="n">STD_PERMS</span><span class="p">;</span></div><div class='line' id='LC351'>			<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC352'>		<span class="k">case</span> <span class="n">YAFFS_OBJECT_TYPE_SPECIAL</span>:</div><div class='line' id='LC353'>			<span class="k">switch</span> <span class="p">(</span><span class="n">oh</span><span class="o">-&gt;</span><span class="n">yst_mode</span> <span class="o">&amp;</span> <span class="n">S_IFMT</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC354'>				<span class="k">case</span> <span class="n">S_IFBLK</span>:		<span class="n">type</span> <span class="o">=</span> <span class="sc">&#39;b&#39;</span><span class="p">;</span></div><div class='line' id='LC355'>					<span class="n">snprintf</span><span class="p">(</span><span class="n">fsize</span><span class="p">,</span> <span class="k">sizeof</span><span class="p">(</span><span class="n">fsize</span><span class="p">),</span> <span class="s">&quot;%d,%4d&quot;</span><span class="p">,</span></div><div class='line' id='LC356'>					         <span class="n">major</span><span class="p">(</span><span class="n">oh</span><span class="o">-&gt;</span><span class="n">yst_rdev</span><span class="p">),</span></div><div class='line' id='LC357'>					         <span class="n">minor</span><span class="p">(</span><span class="n">oh</span><span class="o">-&gt;</span><span class="n">yst_rdev</span><span class="p">));</span></div><div class='line' id='LC358'>					<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC359'>				<span class="k">case</span> <span class="n">S_IFCHR</span>:		<span class="n">type</span> <span class="o">=</span> <span class="sc">&#39;c&#39;</span><span class="p">;</span></div><div class='line' id='LC360'>					<span class="n">snprintf</span><span class="p">(</span><span class="n">fsize</span><span class="p">,</span> <span class="k">sizeof</span><span class="p">(</span><span class="n">fsize</span><span class="p">),</span> <span class="s">&quot;%d,%4d&quot;</span><span class="p">,</span></div><div class='line' id='LC361'>					         <span class="n">major</span><span class="p">(</span><span class="n">oh</span><span class="o">-&gt;</span><span class="n">yst_rdev</span><span class="p">),</span></div><div class='line' id='LC362'>					         <span class="n">minor</span><span class="p">(</span><span class="n">oh</span><span class="o">-&gt;</span><span class="n">yst_rdev</span><span class="p">));</span></div><div class='line' id='LC363'>					<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC364'>				<span class="k">case</span> <span class="n">S_IFIFO</span>:		<span class="n">type</span> <span class="o">=</span> <span class="sc">&#39;p&#39;</span><span class="p">;</span> <span class="k">break</span><span class="p">;</span></div><div class='line' id='LC365'>				<span class="k">case</span> <span class="n">S_IFSOCK</span>:		<span class="n">type</span> <span class="o">=</span> <span class="sc">&#39;s&#39;</span><span class="p">;</span> <span class="k">break</span><span class="p">;</span></div><div class='line' id='LC366'>				<span class="nl">default:</span>		<span class="n">type</span> <span class="o">=</span> <span class="sc">&#39;?&#39;</span><span class="p">;</span> <span class="k">break</span><span class="p">;</span></div><div class='line' id='LC367'>			<span class="p">}</span></div><div class='line' id='LC368'>			<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC369'>		<span class="nl">default:</span>				<span class="n">type</span> <span class="o">=</span> <span class="sc">&#39;?&#39;</span><span class="p">;</span> <span class="k">break</span><span class="p">;</span></div><div class='line' id='LC370'>	<span class="p">}</span></div><div class='line' id='LC371'><br/></div><div class='line' id='LC372'>	<span class="cm">/* get file permissions */</span></div><div class='line' id='LC373'>	<span class="n">perm</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span> <span class="o">=</span> <span class="n">mode</span> <span class="o">&amp;</span> <span class="n">S_IRUSR</span> <span class="o">?</span> <span class="sc">&#39;r&#39;</span> <span class="o">:</span> <span class="sc">&#39;-&#39;</span><span class="p">;</span></div><div class='line' id='LC374'>	<span class="n">perm</span><span class="p">[</span><span class="mi">1</span><span class="p">]</span> <span class="o">=</span> <span class="n">mode</span> <span class="o">&amp;</span> <span class="n">S_IWUSR</span> <span class="o">?</span> <span class="sc">&#39;w&#39;</span> <span class="o">:</span> <span class="sc">&#39;-&#39;</span><span class="p">;</span></div><div class='line' id='LC375'>	<span class="n">perm</span><span class="p">[</span><span class="mi">2</span><span class="p">]</span> <span class="o">=</span> <span class="n">mode</span> <span class="o">&amp;</span> <span class="n">S_IXUSR</span> <span class="o">?</span> <span class="sc">&#39;x&#39;</span> <span class="o">:</span> <span class="sc">&#39;-&#39;</span><span class="p">;</span></div><div class='line' id='LC376'>	<span class="n">perm</span><span class="p">[</span><span class="mi">3</span><span class="p">]</span> <span class="o">=</span> <span class="n">mode</span> <span class="o">&amp;</span> <span class="n">S_IRGRP</span> <span class="o">?</span> <span class="sc">&#39;r&#39;</span> <span class="o">:</span> <span class="sc">&#39;-&#39;</span><span class="p">;</span></div><div class='line' id='LC377'>	<span class="n">perm</span><span class="p">[</span><span class="mi">4</span><span class="p">]</span> <span class="o">=</span> <span class="n">mode</span> <span class="o">&amp;</span> <span class="n">S_IWGRP</span> <span class="o">?</span> <span class="sc">&#39;w&#39;</span> <span class="o">:</span> <span class="sc">&#39;-&#39;</span><span class="p">;</span></div><div class='line' id='LC378'>	<span class="n">perm</span><span class="p">[</span><span class="mi">5</span><span class="p">]</span> <span class="o">=</span> <span class="n">mode</span> <span class="o">&amp;</span> <span class="n">S_IXGRP</span> <span class="o">?</span> <span class="sc">&#39;x&#39;</span> <span class="o">:</span> <span class="sc">&#39;-&#39;</span><span class="p">;</span></div><div class='line' id='LC379'>	<span class="n">perm</span><span class="p">[</span><span class="mi">6</span><span class="p">]</span> <span class="o">=</span> <span class="n">mode</span> <span class="o">&amp;</span> <span class="n">S_IROTH</span> <span class="o">?</span> <span class="sc">&#39;r&#39;</span> <span class="o">:</span> <span class="sc">&#39;-&#39;</span><span class="p">;</span></div><div class='line' id='LC380'>	<span class="n">perm</span><span class="p">[</span><span class="mi">7</span><span class="p">]</span> <span class="o">=</span> <span class="n">mode</span> <span class="o">&amp;</span> <span class="n">S_IWOTH</span> <span class="o">?</span> <span class="sc">&#39;w&#39;</span> <span class="o">:</span> <span class="sc">&#39;-&#39;</span><span class="p">;</span></div><div class='line' id='LC381'>	<span class="n">perm</span><span class="p">[</span><span class="mi">8</span><span class="p">]</span> <span class="o">=</span> <span class="n">mode</span> <span class="o">&amp;</span> <span class="n">S_IXOTH</span> <span class="o">?</span> <span class="sc">&#39;x&#39;</span> <span class="o">:</span> <span class="sc">&#39;-&#39;</span><span class="p">;</span></div><div class='line' id='LC382'>	<span class="k">if</span> <span class="p">(</span><span class="n">mode</span> <span class="o">&amp;</span> <span class="n">S_ISUID</span><span class="p">)</span> <span class="n">perm</span><span class="p">[</span><span class="mi">2</span><span class="p">]</span> <span class="o">=</span> <span class="n">perm</span><span class="p">[</span><span class="mi">2</span><span class="p">]</span> <span class="o">==</span> <span class="sc">&#39;-&#39;</span> <span class="o">?</span> <span class="sc">&#39;S&#39;</span> <span class="o">:</span> <span class="sc">&#39;s&#39;</span><span class="p">;</span></div><div class='line' id='LC383'>	<span class="k">if</span> <span class="p">(</span><span class="n">mode</span> <span class="o">&amp;</span> <span class="n">S_ISGID</span><span class="p">)</span> <span class="n">perm</span><span class="p">[</span><span class="mi">5</span><span class="p">]</span> <span class="o">=</span> <span class="n">perm</span><span class="p">[</span><span class="mi">5</span><span class="p">]</span> <span class="o">==</span> <span class="sc">&#39;-&#39;</span> <span class="o">?</span> <span class="sc">&#39;S&#39;</span> <span class="o">:</span> <span class="sc">&#39;s&#39;</span><span class="p">;</span></div><div class='line' id='LC384'>	<span class="k">if</span> <span class="p">(</span><span class="n">mode</span> <span class="o">&amp;</span> <span class="n">S_ISVTX</span><span class="p">)</span> <span class="n">perm</span><span class="p">[</span><span class="mi">8</span><span class="p">]</span> <span class="o">=</span> <span class="n">perm</span><span class="p">[</span><span class="mi">8</span><span class="p">]</span> <span class="o">==</span> <span class="sc">&#39;-&#39;</span> <span class="o">?</span> <span class="sc">&#39;T&#39;</span> <span class="o">:</span> <span class="sc">&#39;t&#39;</span><span class="p">;</span></div><div class='line' id='LC385'>	<span class="n">perm</span><span class="p">[</span><span class="mi">9</span><span class="p">]</span> <span class="o">=</span> <span class="sc">&#39;\0&#39;</span><span class="p">;</span></div><div class='line' id='LC386'><br/></div><div class='line' id='LC387'>	<span class="cm">/* print file infos */</span></div><div class='line' id='LC388'>	<span class="n">localtime_r</span><span class="p">(</span><span class="o">&amp;</span><span class="n">mtime</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">tm</span><span class="p">);</span></div><div class='line' id='LC389'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;%c%s %8s %4d-%02d-%02d %02d:%02d %s&quot;</span><span class="p">,</span></div><div class='line' id='LC390'>	       <span class="n">type</span><span class="p">,</span> <span class="n">perm</span><span class="p">,</span> <span class="n">fsize</span><span class="p">,</span></div><div class='line' id='LC391'>	       <span class="n">tm</span><span class="p">.</span><span class="n">tm_year</span> <span class="o">+</span> <span class="mi">1900</span><span class="p">,</span> <span class="n">tm</span><span class="p">.</span><span class="n">tm_mon</span> <span class="o">+</span> <span class="mi">1</span><span class="p">,</span> <span class="n">tm</span><span class="p">.</span><span class="n">tm_mday</span><span class="p">,</span></div><div class='line' id='LC392'>	       <span class="n">tm</span><span class="p">.</span><span class="n">tm_hour</span><span class="p">,</span> <span class="n">tm</span><span class="p">.</span><span class="n">tm_min</span><span class="p">,</span> <span class="n">name</span><span class="p">);</span></div><div class='line' id='LC393'><br/></div><div class='line' id='LC394'>	<span class="cm">/* link destination */</span></div><div class='line' id='LC395'>	<span class="k">if</span> <span class="p">(</span><span class="n">oh</span><span class="o">-&gt;</span><span class="n">type</span> <span class="o">==</span> <span class="n">YAFFS_OBJECT_TYPE_HARDLINK</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC396'>		<span class="k">if</span> <span class="p">(</span><span class="n">eq_obj</span> <span class="o">==</span> <span class="nb">NULL</span><span class="p">)</span></div><div class='line' id='LC397'>			<span class="n">printf</span><span class="p">(</span><span class="s">&quot; -&gt; !!! Invalid !!!&quot;</span><span class="p">);</span></div><div class='line' id='LC398'>		<span class="k">else</span></div><div class='line' id='LC399'>			<span class="n">printf</span><span class="p">(</span><span class="s">&quot; -&gt; /%s&quot;</span><span class="p">,</span> <span class="n">eq_obj</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">);</span></div><div class='line' id='LC400'>	<span class="p">}</span> <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">oh</span><span class="o">-&gt;</span><span class="n">type</span> <span class="o">==</span> <span class="n">YAFFS_OBJECT_TYPE_SYMLINK</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC401'>		<span class="n">printf</span><span class="p">(</span><span class="s">&quot; -&gt; %s&quot;</span><span class="p">,</span> <span class="n">oh</span><span class="o">-&gt;</span><span class="n">alias</span><span class="p">);</span></div><div class='line' id='LC402'>	<span class="p">}</span></div><div class='line' id='LC403'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC404'><span class="p">}</span></div><div class='line' id='LC405'><br/></div><div class='line' id='LC406'><span class="kt">int</span> <span class="n">read_chunk</span><span class="p">(</span><span class="kt">void</span><span class="p">);</span></div><div class='line' id='LC407'><br/></div><div class='line' id='LC408'><span class="k">static</span> <span class="k">struct</span> <span class="p">{</span></div><div class='line' id='LC409'>	<span class="kt">unsigned</span> <span class="n">objectId</span><span class="p">;</span></div><div class='line' id='LC410'>	<span class="kt">int</span>      <span class="n">chunk_no</span><span class="p">;</span></div><div class='line' id='LC411'>	<span class="kt">unsigned</span> <span class="kt">char</span> <span class="n">data</span><span class="p">[</span><span class="n">MAX_CHUNK_SIZE</span> <span class="o">+</span> <span class="n">MAX_SPARE_SIZE</span><span class="p">];</span></div><div class='line' id='LC412'><span class="p">}</span> <span class="n">saved_chunk</span><span class="p">;</span></div><div class='line' id='LC413'><br/></div><div class='line' id='LC414'><span class="kt">int</span> <span class="nf">next_data_chunk</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC415'>	<span class="n">yaffs_PackedTags2</span> <span class="o">*</span><span class="n">pt</span><span class="p">;</span></div><div class='line' id='LC416'>	<span class="kt">unsigned</span> <span class="n">next_objectId</span><span class="p">;</span></div><div class='line' id='LC417'>	<span class="kt">unsigned</span> <span class="n">next_chunkId</span><span class="p">;</span></div><div class='line' id='LC418'>	<span class="kt">int</span> <span class="n">ret</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC419'><br/></div><div class='line' id='LC420'>	<span class="n">pt</span> <span class="o">=</span> <span class="p">(</span><span class="n">yaffs_PackedTags2</span> <span class="o">*</span><span class="p">)</span><span class="n">spare_data</span><span class="p">;</span></div><div class='line' id='LC421'>	<span class="n">next_objectId</span> <span class="o">=</span> <span class="n">pt</span><span class="o">-&gt;</span><span class="n">t</span><span class="p">.</span><span class="n">objectId</span><span class="p">;</span></div><div class='line' id='LC422'>	<span class="n">next_chunkId</span>  <span class="o">=</span> <span class="n">pt</span><span class="o">-&gt;</span><span class="n">t</span><span class="p">.</span><span class="n">chunkId</span> <span class="o">+</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC423'><br/></div><div class='line' id='LC424'>	<span class="k">if</span> <span class="p">(</span><span class="n">saved_chunk</span><span class="p">.</span><span class="n">objectId</span> <span class="o">==</span> <span class="n">next_objectId</span> <span class="o">&amp;&amp;</span>	<span class="cm">/* use saved chunk ? */</span></div><div class='line' id='LC425'>	    <span class="n">next_chunkId</span> <span class="o">==</span> <span class="mi">1</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC426'>		<span class="n">memcpy</span><span class="p">(</span><span class="n">chunk_data</span><span class="p">,</span> <span class="n">saved_chunk</span><span class="p">.</span><span class="n">data</span><span class="p">,</span> <span class="n">chunk_size</span><span class="p">);</span></div><div class='line' id='LC427'>		<span class="n">memcpy</span><span class="p">(</span><span class="n">spare_data</span><span class="p">,</span> <span class="n">saved_chunk</span><span class="p">.</span><span class="n">data</span><span class="o">+</span><span class="n">chunk_size</span><span class="p">,</span> <span class="n">spare_size</span><span class="p">);</span></div><div class='line' id='LC428'>		<span class="n">saved_chunk</span><span class="p">.</span><span class="n">objectId</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC429'>		<span class="n">ret</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC430'>	<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC431'>		<span class="k">if</span> <span class="p">(</span><span class="n">read_chunk</span><span class="p">()</span> <span class="o">&amp;&amp;</span>		<span class="cm">/* valid next chunk ? */</span></div><div class='line' id='LC432'>		    <span class="n">pt</span><span class="o">-&gt;</span><span class="n">t</span><span class="p">.</span><span class="n">objectId</span> <span class="o">==</span> <span class="n">next_objectId</span> <span class="o">&amp;&amp;</span></div><div class='line' id='LC433'>		    <span class="n">pt</span><span class="o">-&gt;</span><span class="n">t</span><span class="p">.</span><span class="n">chunkId</span> <span class="o">==</span> <span class="n">next_chunkId</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC434'>			<span class="n">ret</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC435'>		<span class="p">}</span></div><div class='line' id='LC436'>	<span class="p">}</span></div><div class='line' id='LC437'>	<span class="k">return</span> <span class="n">ret</span><span class="p">;</span></div><div class='line' id='LC438'><span class="p">}</span></div><div class='line' id='LC439'><br/></div><div class='line' id='LC440'><span class="kt">void</span> <span class="nf">process_chunk</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC441'>	<span class="n">yaffs_ObjectHeader</span> <span class="n">oh</span><span class="p">;</span></div><div class='line' id='LC442'>	<span class="n">yaffs_PackedTags2</span> <span class="o">*</span><span class="n">pt</span><span class="p">;</span></div><div class='line' id='LC443'>	<span class="n">object</span> <span class="o">*</span><span class="n">obj</span><span class="p">,</span> <span class="o">*</span><span class="n">eq_obj</span><span class="p">;</span></div><div class='line' id='LC444'>	<span class="kt">int</span> <span class="n">out_file</span><span class="p">,</span> <span class="n">remain</span><span class="p">,</span> <span class="n">s</span><span class="p">;</span></div><div class='line' id='LC445'><br/></div><div class='line' id='LC446'>	<span class="n">oh</span> <span class="o">=</span> <span class="o">*</span><span class="p">(</span><span class="n">yaffs_ObjectHeader</span> <span class="o">*</span><span class="p">)</span><span class="n">chunk_data</span><span class="p">;</span></div><div class='line' id='LC447'>	<span class="n">pt</span> <span class="o">=</span> <span class="p">(</span><span class="n">yaffs_PackedTags2</span> <span class="o">*</span><span class="p">)</span><span class="n">spare_data</span><span class="p">;</span></div><div class='line' id='LC448'><br/></div><div class='line' id='LC449'>	<span class="k">if</span> <span class="p">(</span><span class="n">pt</span><span class="o">-&gt;</span><span class="n">t</span><span class="p">.</span><span class="n">sequenceNumber</span> <span class="o">==</span> <span class="mh">0xffffffff</span><span class="p">)</span>	<span class="cm">/* empty object */</span></div><div class='line' id='LC450'>		<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC451'><br/></div><div class='line' id='LC452'>	<span class="k">if</span> <span class="p">(</span><span class="n">saved_chunk</span><span class="p">.</span><span class="n">objectId</span> <span class="o">!=</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span>	<span class="cm">/* saved chunk is not part of object */</span></div><div class='line' id='LC453'>	    <span class="n">saved_chunk</span><span class="p">.</span><span class="n">objectId</span> <span class="o">!=</span> <span class="n">pt</span><span class="o">-&gt;</span><span class="n">t</span><span class="p">.</span><span class="n">objectId</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC454'>		<span class="n">prt_err</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="s">&quot;Warning: Invalid header at chunk #%d, skipping...&quot;</span><span class="p">,</span></div><div class='line' id='LC455'>		        <span class="n">saved_chunk</span><span class="p">.</span><span class="n">chunk_no</span><span class="p">);</span></div><div class='line' id='LC456'>		<span class="k">if</span> <span class="p">(</span><span class="o">++</span><span class="n">warn_count</span> <span class="o">&gt;=</span> <span class="n">MAX_WARN</span><span class="p">)</span></div><div class='line' id='LC457'>			<span class="n">prt_err</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="s">&quot;Giving up&quot;</span><span class="p">);</span></div><div class='line' id='LC458'>		<span class="n">saved_chunk</span><span class="p">.</span><span class="n">objectId</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC459'>	<span class="p">}</span></div><div class='line' id='LC460'><br/></div><div class='line' id='LC461'>	<span class="k">if</span> <span class="p">(</span><span class="n">pt</span><span class="o">-&gt;</span><span class="n">t</span><span class="p">.</span><span class="n">chunkId</span> <span class="o">==</span> <span class="mi">1</span><span class="p">)</span> <span class="p">{</span>		<span class="cm">/* save chunk #1 */</span></div><div class='line' id='LC462'>		<span class="n">saved_chunk</span><span class="p">.</span><span class="n">objectId</span> <span class="o">=</span> <span class="n">pt</span><span class="o">-&gt;</span><span class="n">t</span><span class="p">.</span><span class="n">objectId</span><span class="p">;</span></div><div class='line' id='LC463'>		<span class="n">saved_chunk</span><span class="p">.</span><span class="n">chunk_no</span> <span class="o">=</span> <span class="n">chunk_no</span><span class="p">;</span></div><div class='line' id='LC464'>		<span class="n">memcpy</span><span class="p">(</span><span class="n">saved_chunk</span><span class="p">.</span><span class="n">data</span><span class="p">,</span> <span class="n">chunk_data</span><span class="p">,</span> <span class="n">chunk_size</span><span class="p">);</span></div><div class='line' id='LC465'>		<span class="n">memcpy</span><span class="p">(</span><span class="n">saved_chunk</span><span class="p">.</span><span class="n">data</span><span class="o">+</span><span class="n">chunk_size</span><span class="p">,</span> <span class="n">spare_data</span><span class="p">,</span> <span class="n">spare_size</span><span class="p">);</span></div><div class='line' id='LC466'>		<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC467'>	<span class="p">}</span> <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">pt</span><span class="o">-&gt;</span><span class="n">t</span><span class="p">.</span><span class="n">chunkId</span> <span class="o">!=</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span>	<span class="cm">/* not a new object */</span></div><div class='line' id='LC468'>		<span class="n">prt_err</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="s">&quot;Warning: Invalid header at chunk #%d, skipping...&quot;</span><span class="p">,</span></div><div class='line' id='LC469'>		        <span class="n">chunk_no</span><span class="p">);</span></div><div class='line' id='LC470'>		<span class="k">if</span> <span class="p">(</span><span class="o">++</span><span class="n">warn_count</span> <span class="o">&gt;=</span> <span class="n">MAX_WARN</span><span class="p">)</span></div><div class='line' id='LC471'>			<span class="n">prt_err</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="s">&quot;Giving up&quot;</span><span class="p">);</span></div><div class='line' id='LC472'>		<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC473'>	<span class="p">}</span></div><div class='line' id='LC474'><br/></div><div class='line' id='LC475'>	<span class="n">obj</span> <span class="o">=</span> <span class="n">add_object</span><span class="p">(</span><span class="o">&amp;</span><span class="n">oh</span><span class="p">,</span> <span class="n">pt</span><span class="p">);</span></div><div class='line' id='LC476'><br/></div><div class='line' id='LC477'>	<span class="cm">/* listing */</span></div><div class='line' id='LC478'>	<span class="k">if</span> <span class="p">(</span><span class="n">opt_verbose</span><span class="p">)</span></div><div class='line' id='LC479'>		<span class="n">prt_node</span><span class="p">(</span><span class="n">obj</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">oh</span><span class="p">);</span></div><div class='line' id='LC480'>	<span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">opt_list</span><span class="p">)</span></div><div class='line' id='LC481'>		<span class="n">printf</span><span class="p">(</span><span class="s">&quot;%s</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">obj</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">);</span></div><div class='line' id='LC482'>	<span class="k">if</span> <span class="p">(</span><span class="n">opt_list</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC483'>		<span class="k">if</span> <span class="p">(</span><span class="n">oh</span><span class="p">.</span><span class="n">type</span> <span class="o">==</span> <span class="n">YAFFS_OBJECT_TYPE_FILE</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC484'>			<span class="n">remain</span> <span class="o">=</span> <span class="n">oh</span><span class="p">.</span><span class="n">fileSize</span><span class="p">;</span>	<span class="cm">/* skip over data chunks */</span></div><div class='line' id='LC485'>			<span class="k">while</span><span class="p">(</span><span class="n">remain</span> <span class="o">&gt;</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC486'>				<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">next_data_chunk</span><span class="p">())</span></div><div class='line' id='LC487'>					<span class="n">prt_err</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="s">&quot;Broken image file&quot;</span><span class="p">);</span></div><div class='line' id='LC488'>				<span class="n">remain</span> <span class="o">-=</span> <span class="n">pt</span><span class="o">-&gt;</span><span class="n">t</span><span class="p">.</span><span class="n">byteCount</span><span class="p">;</span></div><div class='line' id='LC489'>			<span class="p">}</span></div><div class='line' id='LC490'>		<span class="p">}</span></div><div class='line' id='LC491'>		<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC492'>	<span class="p">}</span></div><div class='line' id='LC493'><br/></div><div class='line' id='LC494'>	<span class="k">switch</span><span class="p">(</span><span class="n">oh</span><span class="p">.</span><span class="n">type</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC495'>		<span class="k">case</span> <span class="n">YAFFS_OBJECT_TYPE_FILE</span>:</div><div class='line' id='LC496'>			<span class="n">remain</span> <span class="o">=</span> <span class="n">oh</span><span class="p">.</span><span class="n">fileSize</span><span class="p">;</span></div><div class='line' id='LC497'>			<span class="n">out_file</span> <span class="o">=</span> <span class="n">creat</span><span class="p">(</span><span class="n">obj</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">,</span> <span class="n">oh</span><span class="p">.</span><span class="n">yst_mode</span> <span class="o">&amp;</span> <span class="n">STD_PERMS</span><span class="p">);</span></div><div class='line' id='LC498'>			<span class="k">if</span> <span class="p">(</span><span class="n">out_file</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC499'>				<span class="n">prt_err</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="n">errno</span><span class="p">,</span> <span class="s">&quot;Can&#39;t create file %s&quot;</span><span class="p">,</span> <span class="n">obj</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">);</span></div><div class='line' id='LC500'>			<span class="k">while</span><span class="p">(</span><span class="n">remain</span> <span class="o">&gt;</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC501'>				<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">next_data_chunk</span><span class="p">())</span></div><div class='line' id='LC502'>					<span class="n">prt_err</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="s">&quot;Broken image file&quot;</span><span class="p">);</span></div><div class='line' id='LC503'>				<span class="n">s</span> <span class="o">=</span> <span class="p">(</span><span class="n">remain</span> <span class="o">&lt;</span> <span class="n">pt</span><span class="o">-&gt;</span><span class="n">t</span><span class="p">.</span><span class="n">byteCount</span><span class="p">)</span> <span class="o">?</span> <span class="n">remain</span> <span class="o">:</span> <span class="n">pt</span><span class="o">-&gt;</span><span class="n">t</span><span class="p">.</span><span class="n">byteCount</span><span class="p">;</span></div><div class='line' id='LC504'>				<span class="k">if</span> <span class="p">(</span><span class="n">safe_write</span><span class="p">(</span><span class="n">out_file</span><span class="p">,</span> <span class="n">chunk_data</span><span class="p">,</span> <span class="n">s</span><span class="p">)</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC505'>					<span class="n">prt_err</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="n">errno</span><span class="p">,</span> <span class="s">&quot;Can&#39;t write to %s&quot;</span><span class="p">,</span> <span class="n">obj</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">);</span></div><div class='line' id='LC506'>				<span class="n">remain</span> <span class="o">-=</span> <span class="n">s</span><span class="p">;</span></div><div class='line' id='LC507'>			<span class="p">}</span></div><div class='line' id='LC508'>			<span class="n">close</span><span class="p">(</span><span class="n">out_file</span><span class="p">);</span></div><div class='line' id='LC509'>			<span class="n">safe_lchown</span><span class="p">(</span><span class="n">obj</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">,</span> <span class="n">oh</span><span class="p">.</span><span class="n">yst_uid</span><span class="p">,</span> <span class="n">oh</span><span class="p">.</span><span class="n">yst_gid</span><span class="p">);</span></div><div class='line' id='LC510'>			<span class="k">if</span> <span class="p">((</span><span class="n">oh</span><span class="p">.</span><span class="n">yst_mode</span> <span class="o">&amp;</span> <span class="n">EXTRA_PERMS</span><span class="p">)</span> <span class="o">!=</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span></div><div class='line' id='LC511'>			    <span class="n">chmod</span><span class="p">(</span><span class="n">obj</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">,</span> <span class="n">oh</span><span class="p">.</span><span class="n">yst_mode</span><span class="p">)</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC512'>				<span class="n">prt_err</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span> <span class="n">errno</span><span class="p">,</span> <span class="s">&quot;Warning: Can&#39;t chmod %s&quot;</span><span class="p">,</span> <span class="n">obj</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">);</span></div><div class='line' id='LC513'>			<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC514'>		<span class="k">case</span> <span class="n">YAFFS_OBJECT_TYPE_SYMLINK</span>:</div><div class='line' id='LC515'>			<span class="k">if</span> <span class="p">(</span><span class="n">symlink</span><span class="p">(</span><span class="n">oh</span><span class="p">.</span><span class="n">alias</span><span class="p">,</span> <span class="n">obj</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">)</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC516'>				<span class="n">prt_err</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="n">errno</span><span class="p">,</span> <span class="s">&quot;Can&#39;t create symlink %s&quot;</span><span class="p">,</span> <span class="n">obj</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">);</span></div><div class='line' id='LC517'>			<span class="n">safe_lchown</span><span class="p">(</span><span class="n">obj</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">,</span> <span class="n">oh</span><span class="p">.</span><span class="n">yst_uid</span><span class="p">,</span> <span class="n">oh</span><span class="p">.</span><span class="n">yst_gid</span><span class="p">);</span></div><div class='line' id='LC518'>			<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC519'>		<span class="k">case</span> <span class="n">YAFFS_OBJECT_TYPE_DIRECTORY</span>:</div><div class='line' id='LC520'>			<span class="k">if</span> <span class="p">(</span><span class="n">pt</span><span class="o">-&gt;</span><span class="n">t</span><span class="p">.</span><span class="n">objectId</span> <span class="o">!=</span> <span class="n">YAFFS_OBJECTID_ROOT</span> <span class="o">&amp;&amp;</span></div><div class='line' id='LC521'>			    <span class="n">mkdir</span><span class="p">(</span><span class="n">obj</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">,</span> <span class="n">oh</span><span class="p">.</span><span class="n">yst_mode</span> <span class="o">&amp;</span> <span class="n">STD_PERMS</span><span class="p">)</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC522'>					<span class="n">prt_err</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="n">errno</span><span class="p">,</span> <span class="s">&quot;Can&#39;t create directory %s&quot;</span><span class="p">,</span> <span class="n">obj</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">);</span></div><div class='line' id='LC523'>			<span class="n">safe_lchown</span><span class="p">(</span><span class="n">obj</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">,</span> <span class="n">oh</span><span class="p">.</span><span class="n">yst_uid</span><span class="p">,</span> <span class="n">oh</span><span class="p">.</span><span class="n">yst_gid</span><span class="p">);</span></div><div class='line' id='LC524'>			<span class="k">if</span> <span class="p">((</span><span class="n">pt</span><span class="o">-&gt;</span><span class="n">t</span><span class="p">.</span><span class="n">objectId</span> <span class="o">==</span> <span class="n">YAFFS_OBJECTID_ROOT</span> <span class="o">||</span></div><div class='line' id='LC525'>			     <span class="p">(</span><span class="n">oh</span><span class="p">.</span><span class="n">yst_mode</span> <span class="o">&amp;</span> <span class="n">EXTRA_PERMS</span><span class="p">)</span> <span class="o">!=</span> <span class="mi">0</span><span class="p">)</span> <span class="o">&amp;&amp;</span></div><div class='line' id='LC526'>			    <span class="n">chmod</span><span class="p">(</span><span class="n">obj</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">,</span> <span class="n">oh</span><span class="p">.</span><span class="n">yst_mode</span><span class="p">)</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC527'>				<span class="n">prt_err</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span> <span class="n">errno</span><span class="p">,</span> <span class="s">&quot;Warning: Can&#39;t chmod %s&quot;</span><span class="p">,</span> <span class="n">obj</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">);</span></div><div class='line' id='LC528'>			<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC529'>		<span class="k">case</span> <span class="n">YAFFS_OBJECT_TYPE_HARDLINK</span>:</div><div class='line' id='LC530'>			<span class="n">eq_obj</span> <span class="o">=</span> <span class="n">get_object</span><span class="p">(</span><span class="n">oh</span><span class="p">.</span><span class="n">equivalentObjectId</span><span class="p">);</span></div><div class='line' id='LC531'>			<span class="k">if</span> <span class="p">(</span><span class="n">eq_obj</span> <span class="o">==</span> <span class="nb">NULL</span><span class="p">)</span></div><div class='line' id='LC532'>				<span class="n">prt_err</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="s">&quot;Invalid equivalentObjectId %u in object %u (%s)&quot;</span><span class="p">,</span></div><div class='line' id='LC533'>				        <span class="n">oh</span><span class="p">.</span><span class="n">equivalentObjectId</span><span class="p">,</span> <span class="n">pt</span><span class="o">-&gt;</span><span class="n">t</span><span class="p">.</span><span class="n">objectId</span><span class="p">,</span> <span class="n">oh</span><span class="p">.</span><span class="n">name</span><span class="p">);</span></div><div class='line' id='LC534'>			<span class="k">if</span> <span class="p">(</span><span class="n">link</span><span class="p">(</span><span class="n">eq_obj</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">,</span> <span class="n">obj</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">)</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC535'>				<span class="n">prt_err</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="n">errno</span><span class="p">,</span> <span class="s">&quot;Can&#39;t create hardlink %s&quot;</span><span class="p">,</span> <span class="n">obj</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">);</span></div><div class='line' id='LC536'>			<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC537'>		<span class="k">case</span> <span class="n">YAFFS_OBJECT_TYPE_SPECIAL</span>:</div><div class='line' id='LC538'>			<span class="k">if</span> <span class="p">(</span><span class="n">mknod</span><span class="p">(</span><span class="n">obj</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">,</span> <span class="n">oh</span><span class="p">.</span><span class="n">yst_mode</span><span class="p">,</span> <span class="n">oh</span><span class="p">.</span><span class="n">yst_rdev</span><span class="p">)</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC539'>				<span class="k">if</span> <span class="p">(</span><span class="n">errno</span> <span class="o">==</span> <span class="n">EPERM</span> <span class="o">||</span> <span class="n">errno</span> <span class="o">==</span> <span class="n">EINVAL</span><span class="p">)</span></div><div class='line' id='LC540'>					<span class="n">prt_err</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span> <span class="n">errno</span><span class="p">,</span> <span class="s">&quot;Warning: Can&#39;t create device %s&quot;</span><span class="p">,</span> <span class="n">obj</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">);</span></div><div class='line' id='LC541'>				<span class="k">else</span></div><div class='line' id='LC542'>					<span class="n">prt_err</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="n">errno</span><span class="p">,</span> <span class="s">&quot;Can&#39;t create device %s&quot;</span><span class="p">,</span> <span class="n">obj</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">);</span></div><div class='line' id='LC543'>			<span class="p">}</span> <span class="k">else</span></div><div class='line' id='LC544'>				<span class="n">safe_lchown</span><span class="p">(</span><span class="n">obj</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">,</span> <span class="n">oh</span><span class="p">.</span><span class="n">yst_uid</span><span class="p">,</span> <span class="n">oh</span><span class="p">.</span><span class="n">yst_gid</span><span class="p">);</span></div><div class='line' id='LC545'>			<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC546'>		<span class="k">case</span> <span class="n">YAFFS_OBJECT_TYPE_UNKNOWN</span>:</div><div class='line' id='LC547'>			<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC548'>	<span class="p">}</span></div><div class='line' id='LC549'><br/></div><div class='line' id='LC550'>	<span class="cm">/* set file date and time */</span></div><div class='line' id='LC551'>	<span class="k">switch</span><span class="p">(</span><span class="n">oh</span><span class="p">.</span><span class="n">type</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC552'>		<span class="k">case</span> <span class="n">YAFFS_OBJECT_TYPE_FILE</span>:</div><div class='line' id='LC553'>		<span class="k">case</span> <span class="n">YAFFS_OBJECT_TYPE_SPECIAL</span>:</div><div class='line' id='LC554'><span class="cp">#ifdef HAS_LUTIMES</span></div><div class='line' id='LC555'>		<span class="k">case</span> <span class="n">YAFFS_OBJECT_TYPE_SYMLINK</span>:</div><div class='line' id='LC556'><span class="cp">#endif</span></div><div class='line' id='LC557'>			<span class="n">set_utime</span><span class="p">(</span><span class="n">obj</span><span class="o">-&gt;</span><span class="n">path_name</span><span class="p">,</span></div><div class='line' id='LC558'>			          <span class="n">oh</span><span class="p">.</span><span class="n">yst_atime</span><span class="p">,</span> <span class="n">oh</span><span class="p">.</span><span class="n">yst_mtime</span><span class="p">);</span></div><div class='line' id='LC559'>			<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC560'>		<span class="k">case</span> <span class="n">YAFFS_OBJECT_TYPE_DIRECTORY</span>:</div><div class='line' id='LC561'>		<span class="nl">default:</span></div><div class='line' id='LC562'>			<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC563'>	<span class="p">}</span></div><div class='line' id='LC564'><span class="p">}</span></div><div class='line' id='LC565'><br/></div><div class='line' id='LC566'><br/></div><div class='line' id='LC567'><span class="kt">int</span> <span class="nf">read_chunk</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC568'>	<span class="kt">ssize_t</span> <span class="n">s</span><span class="p">,</span> <span class="n">len</span><span class="p">,</span> <span class="n">offset</span><span class="p">;</span></div><div class='line' id='LC569'><br/></div><div class='line' id='LC570'>	<span class="n">chunk_no</span><span class="o">++</span><span class="p">;</span></div><div class='line' id='LC571'>	<span class="n">len</span> <span class="o">=</span> <span class="n">chunk_size</span> <span class="o">+</span> <span class="n">spare_size</span><span class="p">;</span></div><div class='line' id='LC572'>	<span class="n">offset</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC573'>	<span class="n">memset</span><span class="p">(</span><span class="n">data</span><span class="p">,</span> <span class="mh">0xff</span><span class="p">,</span> <span class="n">len</span><span class="p">);</span></div><div class='line' id='LC574'><br/></div><div class='line' id='LC575'>	<span class="k">if</span> <span class="p">(</span><span class="n">buf_len</span> <span class="o">&gt;</span> <span class="n">buf_idx</span><span class="p">)</span> <span class="p">{</span>		<span class="cm">/* copy from buffer */</span></div><div class='line' id='LC576'>		<span class="n">s</span> <span class="o">=</span> <span class="n">buf_len</span> <span class="o">-</span> <span class="n">buf_idx</span><span class="p">;</span></div><div class='line' id='LC577'>		<span class="k">if</span> <span class="p">(</span><span class="n">s</span> <span class="o">&gt;</span> <span class="n">len</span><span class="p">)</span> <span class="n">s</span> <span class="o">=</span> <span class="n">len</span><span class="p">;</span></div><div class='line' id='LC578'>		<span class="n">memcpy</span><span class="p">(</span><span class="n">data</span><span class="p">,</span> <span class="n">buffer</span><span class="o">+</span><span class="n">buf_idx</span><span class="p">,</span> <span class="n">s</span><span class="p">);</span></div><div class='line' id='LC579'>		<span class="n">buf_idx</span> <span class="o">+=</span> <span class="n">s</span><span class="p">;</span> <span class="n">offset</span> <span class="o">+=</span> <span class="n">s</span><span class="p">;</span></div><div class='line' id='LC580'>	<span class="p">}</span></div><div class='line' id='LC581'><br/></div><div class='line' id='LC582'>	<span class="k">if</span> <span class="p">(</span><span class="n">offset</span> <span class="o">&lt;</span> <span class="n">len</span><span class="p">)</span> <span class="p">{</span>			<span class="cm">/* read from file */</span></div><div class='line' id='LC583'>		<span class="n">s</span> <span class="o">=</span> <span class="n">safe_read</span><span class="p">(</span><span class="n">img_file</span><span class="p">,</span> <span class="n">data</span><span class="o">+</span><span class="n">offset</span><span class="p">,</span> <span class="n">len</span><span class="o">-</span><span class="n">offset</span><span class="p">);</span></div><div class='line' id='LC584'>		<span class="k">if</span> <span class="p">(</span><span class="n">s</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC585'>			<span class="n">prt_err</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="n">errno</span><span class="p">,</span> <span class="s">&quot;Read image file&quot;</span><span class="p">);</span></div><div class='line' id='LC586'>		<span class="n">offset</span> <span class="o">+=</span> <span class="n">s</span><span class="p">;</span></div><div class='line' id='LC587'>	<span class="p">}</span></div><div class='line' id='LC588'><br/></div><div class='line' id='LC589'>	<span class="k">if</span> <span class="p">(</span><span class="n">offset</span> <span class="o">!=</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span> <span class="n">offset</span> <span class="o">!=</span> <span class="n">len</span><span class="p">)</span>	<span class="cm">/* partial chunk */</span></div><div class='line' id='LC590'>		<span class="n">prt_err</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="s">&quot;Broken image file&quot;</span><span class="p">);</span></div><div class='line' id='LC591'><br/></div><div class='line' id='LC592'>	<span class="k">if</span> <span class="p">(</span><span class="n">offset</span> <span class="o">==</span> <span class="n">len</span> <span class="o">&amp;&amp;</span> <span class="n">spare_off</span> <span class="o">!=</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span>	<span class="cm">/* bad block info */</span></div><div class='line' id='LC593'>		<span class="n">memmove</span><span class="p">(</span><span class="n">data</span><span class="o">+</span><span class="n">chunk_size</span><span class="p">,</span> <span class="n">data</span><span class="o">+</span><span class="n">chunk_size</span><span class="o">+</span><span class="n">spare_off</span><span class="p">,</span></div><div class='line' id='LC594'>		        <span class="n">spare_size</span><span class="o">-</span><span class="n">spare_off</span><span class="p">);</span></div><div class='line' id='LC595'>		<span class="n">memset</span><span class="p">(</span><span class="n">data</span><span class="o">+</span><span class="n">len</span><span class="o">-</span><span class="n">spare_off</span><span class="p">,</span> <span class="mh">0xff</span><span class="p">,</span> <span class="n">spare_off</span><span class="p">);</span></div><div class='line' id='LC596'>	<span class="p">}</span></div><div class='line' id='LC597'><br/></div><div class='line' id='LC598'>	<span class="k">return</span> <span class="n">offset</span> <span class="o">!=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC599'><span class="p">}</span></div><div class='line' id='LC600'><br/></div><div class='line' id='LC601'><span class="kt">int</span> <span class="nf">check_layout</span><span class="p">(</span><span class="kt">int</span> <span class="n">chunk</span><span class="p">,</span> <span class="kt">int</span> <span class="n">spare</span><span class="p">,</span> <span class="kt">int</span> <span class="n">off</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC602'>	<span class="n">yaffs_ObjectHeader</span> <span class="n">oh</span><span class="p">;</span></div><div class='line' id='LC603'>	<span class="n">yaffs_PackedTags2</span>  <span class="n">pt</span><span class="p">;</span></div><div class='line' id='LC604'>	<span class="kt">int</span> <span class="n">i</span><span class="p">,</span> <span class="n">detect</span><span class="p">;</span></div><div class='line' id='LC605'><br/></div><div class='line' id='LC606'>	<span class="k">for</span> <span class="p">(</span><span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">,</span> <span class="n">detect</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="mi">4</span> <span class="o">&amp;&amp;</span> <span class="n">detect</span><span class="p">;</span> <span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC607'>		<span class="n">memcpy</span><span class="p">(</span><span class="o">&amp;</span><span class="n">oh</span><span class="p">,</span> <span class="n">buffer</span> <span class="o">+</span> <span class="n">i</span> <span class="o">*</span> <span class="p">(</span><span class="n">chunk</span><span class="o">+</span><span class="n">spare</span><span class="p">),</span> <span class="k">sizeof</span><span class="p">(</span><span class="n">oh</span><span class="p">));</span></div><div class='line' id='LC608'>		<span class="n">memcpy</span><span class="p">(</span><span class="o">&amp;</span><span class="n">pt</span><span class="p">,</span> <span class="n">buffer</span> <span class="o">+</span> <span class="n">i</span> <span class="o">*</span> <span class="p">(</span><span class="n">chunk</span><span class="o">+</span><span class="n">spare</span><span class="p">)</span> <span class="o">+</span> <span class="n">chunk</span><span class="o">+</span><span class="n">off</span><span class="p">,</span> <span class="k">sizeof</span><span class="p">(</span><span class="n">pt</span><span class="p">));</span></div><div class='line' id='LC609'><br/></div><div class='line' id='LC610'>		<span class="n">detect</span> <span class="o">=</span></div><div class='line' id='LC611'>		  <span class="p">(</span><span class="n">pt</span><span class="p">.</span><span class="n">t</span><span class="p">.</span><span class="n">chunkId</span> <span class="o">&gt;</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span> <span class="n">pt</span><span class="p">.</span><span class="n">t</span><span class="p">.</span><span class="n">chunkId</span> <span class="o">&lt;=</span> <span class="mi">10</span> <span class="o">&amp;&amp;</span></div><div class='line' id='LC612'>		   <span class="n">pt</span><span class="p">.</span><span class="n">t</span><span class="p">.</span><span class="n">objectId</span> <span class="o">&gt;=</span> <span class="mh">0x100</span> <span class="o">&amp;&amp;</span> <span class="n">pt</span><span class="p">.</span><span class="n">t</span><span class="p">.</span><span class="n">objectId</span> <span class="o">&lt;=</span> <span class="p">(</span><span class="mh">0x100</span><span class="o">+</span><span class="mi">10</span><span class="p">)</span> <span class="o">&amp;&amp;</span></div><div class='line' id='LC613'>		   <span class="n">pt</span><span class="p">.</span><span class="n">t</span><span class="p">.</span><span class="n">byteCount</span> <span class="o">&lt;=</span> <span class="n">chunk</span><span class="p">)</span> <span class="o">||</span></div><div class='line' id='LC614'>		  <span class="p">(</span><span class="n">pt</span><span class="p">.</span><span class="n">t</span><span class="p">.</span><span class="n">chunkId</span> <span class="o">==</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span></div><div class='line' id='LC615'>		   <span class="p">(</span><span class="n">pt</span><span class="p">.</span><span class="n">t</span><span class="p">.</span><span class="n">objectId</span> <span class="o">==</span> <span class="n">YAFFS_OBJECTID_ROOT</span> <span class="o">||</span></div><div class='line' id='LC616'>		    <span class="p">(</span><span class="n">pt</span><span class="p">.</span><span class="n">t</span><span class="p">.</span><span class="n">objectId</span> <span class="o">&gt;=</span> <span class="mh">0x100</span> <span class="o">&amp;&amp;</span> <span class="n">pt</span><span class="p">.</span><span class="n">t</span><span class="p">.</span><span class="n">objectId</span> <span class="o">&lt;=</span> <span class="p">(</span><span class="mh">0x100</span><span class="o">+</span><span class="mi">10</span><span class="p">)))</span> <span class="o">&amp;&amp;</span></div><div class='line' id='LC617'>		   <span class="n">pt</span><span class="p">.</span><span class="n">t</span><span class="p">.</span><span class="n">byteCount</span> <span class="o">==</span> <span class="mh">0xffff</span> <span class="o">&amp;&amp;</span></div><div class='line' id='LC618'>		   <span class="p">(</span><span class="n">oh</span><span class="p">.</span><span class="n">type</span> <span class="o">==</span> <span class="n">YAFFS_OBJECT_TYPE_FILE</span> <span class="o">||</span></div><div class='line' id='LC619'>		    <span class="n">oh</span><span class="p">.</span><span class="n">type</span> <span class="o">==</span> <span class="n">YAFFS_OBJECT_TYPE_DIRECTORY</span> <span class="o">||</span></div><div class='line' id='LC620'>		    <span class="n">oh</span><span class="p">.</span><span class="n">type</span> <span class="o">==</span> <span class="n">YAFFS_OBJECT_TYPE_SYMLINK</span> <span class="o">||</span></div><div class='line' id='LC621'>		    <span class="n">oh</span><span class="p">.</span><span class="n">type</span> <span class="o">==</span> <span class="n">YAFFS_OBJECT_TYPE_HARDLINK</span> <span class="o">||</span></div><div class='line' id='LC622'>		    <span class="n">oh</span><span class="p">.</span><span class="n">type</span> <span class="o">==</span> <span class="n">YAFFS_OBJECT_TYPE_SPECIAL</span><span class="p">));</span></div><div class='line' id='LC623'>	<span class="p">}</span></div><div class='line' id='LC624'><br/></div><div class='line' id='LC625'>	<span class="k">return</span> <span class="n">detect</span><span class="p">;</span></div><div class='line' id='LC626'><span class="p">}</span></div><div class='line' id='LC627'><br/></div><div class='line' id='LC628'><span class="kt">void</span> <span class="nf">detect_flash_layout</span><span class="p">(</span><span class="kt">int</span> <span class="n">show</span><span class="p">,</span> <span class="kt">int</span> <span class="n">first</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC629'>	<span class="kt">int</span> <span class="n">cnt</span><span class="p">;</span></div><div class='line' id='LC630'>	<span class="kt">int</span> <span class="n">chunk</span><span class="p">,</span> <span class="n">spare</span><span class="p">,</span> <span class="n">off</span><span class="p">;</span></div><div class='line' id='LC631'><br/></div><div class='line' id='LC632'>	<span class="n">memset</span><span class="p">(</span><span class="n">buffer</span><span class="p">,</span> <span class="mh">0xff</span><span class="p">,</span> <span class="k">sizeof</span><span class="p">(</span><span class="n">buffer</span><span class="p">));</span></div><div class='line' id='LC633'>	<span class="n">buf_len</span> <span class="o">=</span> <span class="n">safe_read</span><span class="p">(</span><span class="n">img_file</span><span class="p">,</span> <span class="n">buffer</span><span class="p">,</span> <span class="k">sizeof</span><span class="p">(</span><span class="n">buffer</span><span class="p">));</span></div><div class='line' id='LC634'>	<span class="k">if</span> <span class="p">(</span><span class="n">buf_len</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC635'>		<span class="n">prt_err</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="n">errno</span><span class="p">,</span> <span class="s">&quot;Read image file&quot;</span><span class="p">);</span></div><div class='line' id='LC636'><br/></div><div class='line' id='LC637'>	<span class="k">if</span> <span class="p">(</span><span class="n">show</span><span class="p">)</span></div><div class='line' id='LC638'>		<span class="n">printf</span><span class="p">(</span><span class="s">&quot;Detected flash layout(s):</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC639'><br/></div><div class='line' id='LC640'>	<span class="n">cnt</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC641'>	<span class="k">for</span> <span class="p">(</span><span class="n">chunk</span> <span class="o">=</span> <span class="n">MIN_CHUNK_SIZE</span><span class="p">;</span> <span class="n">chunk</span> <span class="o">&lt;=</span> <span class="n">MAX_CHUNK_SIZE</span><span class="p">;</span> <span class="n">chunk</span> <span class="o">*=</span> <span class="mi">2</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC642'>		<span class="k">for</span> <span class="p">(</span><span class="n">spare</span> <span class="o">=</span> <span class="n">MIN_SPARE_SIZE</span><span class="p">;</span> <span class="n">spare</span> <span class="o">&lt;=</span> <span class="n">MAX_SPARE_SIZE</span><span class="p">;</span> <span class="n">spare</span> <span class="o">+=</span> <span class="mi">16</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC643'>			<span class="k">for</span> <span class="p">(</span><span class="n">off</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">off</span> <span class="o">&lt;=</span> <span class="mi">2</span><span class="p">;</span> <span class="n">off</span> <span class="o">+=</span> <span class="mi">2</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC644'>				<span class="k">if</span> <span class="p">(</span><span class="n">check_layout</span><span class="p">(</span><span class="n">chunk</span><span class="p">,</span> <span class="n">spare</span><span class="p">,</span> <span class="n">off</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC645'>					<span class="n">cnt</span><span class="o">++</span><span class="p">;</span></div><div class='line' id='LC646'>					<span class="k">if</span> <span class="p">(</span><span class="n">show</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC647'>						<span class="n">printf</span><span class="p">(</span><span class="s">&quot;%2s -c %-2d -s %-3d : chunk size = %2dK, spare size = %3d, %sbad block info</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span></div><div class='line' id='LC648'>						       <span class="n">off</span> <span class="o">?</span> <span class="s">&quot;-b&quot;</span> <span class="o">:</span> <span class="s">&quot;&quot;</span><span class="p">,</span> <span class="n">chunk</span> <span class="o">/</span> <span class="mi">1024</span><span class="p">,</span> <span class="n">spare</span><span class="p">,</span></div><div class='line' id='LC649'>						       <span class="n">chunk</span> <span class="o">/</span> <span class="mi">1024</span><span class="p">,</span> <span class="n">spare</span><span class="p">,</span> <span class="n">off</span> <span class="o">?</span> <span class="s">&quot;&quot;</span> <span class="o">:</span> <span class="s">&quot;no &quot;</span><span class="p">);</span></div><div class='line' id='LC650'>					<span class="p">}</span></div><div class='line' id='LC651'>					<span class="k">if</span> <span class="p">(</span><span class="n">first</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC652'>						<span class="n">chunk_size</span> <span class="o">=</span> <span class="n">chunk</span><span class="p">;</span></div><div class='line' id='LC653'>						<span class="n">spare_size</span> <span class="o">=</span> <span class="n">spare</span><span class="p">;</span></div><div class='line' id='LC654'>						<span class="n">spare_off</span>  <span class="o">=</span> <span class="n">off</span><span class="p">;</span></div><div class='line' id='LC655'>						<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC656'>					<span class="p">}</span></div><div class='line' id='LC657'>				<span class="p">}</span></div><div class='line' id='LC658'>			<span class="p">}</span></div><div class='line' id='LC659'>		<span class="p">}</span></div><div class='line' id='LC660'>	<span class="p">}</span></div><div class='line' id='LC661'><br/></div><div class='line' id='LC662'>	<span class="k">if</span> <span class="p">(</span><span class="n">cnt</span> <span class="o">==</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC663'>		<span class="k">if</span> <span class="p">(</span><span class="n">show</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC664'>			<span class="n">printf</span><span class="p">(</span><span class="s">&quot;-- none --</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC665'>			<span class="n">exit</span><span class="p">(</span><span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC666'>		<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC667'>			<span class="n">prt_err</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="s">&quot;Can&#39;t determine flash layout, perhaps not a yaffs2 image&quot;</span><span class="p">);</span></div><div class='line' id='LC668'>		<span class="p">}</span></div><div class='line' id='LC669'>	<span class="p">}</span></div><div class='line' id='LC670'><span class="p">}</span></div><div class='line' id='LC671'><br/></div><div class='line' id='LC672'><span class="kt">void</span> <span class="nf">usage</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC673'>	<span class="n">fprintf</span><span class="p">(</span><span class="n">stderr</span><span class="p">,</span> <span class="s">&quot;\</span></div><div class='line' id='LC674'><span class="s">unyaffs V%s - extract files from a YAFFS2 file system image.</span><span class="se">\n</span><span class="s">\</span></div><div class='line' id='LC675'><span class="se">\n</span><span class="s">\</span></div><div class='line' id='LC676'><span class="s">Usage: unyaffs [options] &lt;image_file_name&gt; [&lt;extract_directory&gt;]</span><span class="se">\n</span><span class="s">\</span></div><div class='line' id='LC677'><span class="se">\n</span><span class="s">\</span></div><div class='line' id='LC678'><span class="s">Options:</span><span class="se">\n</span><span class="s">\</span></div><div class='line' id='LC679'><span class="s">    -d               detection of flash layout, no extraction</span><span class="se">\n</span><span class="s">\</span></div><div class='line' id='LC680'><span class="s">    -b               spare contains bad block information</span><span class="se">\n</span><span class="s">\</span></div><div class='line' id='LC681'><span class="s">    -c &lt;chunk size&gt;  set chunk size in KByte (default: autodetect, max: %d)</span><span class="se">\n</span><span class="s">\</span></div><div class='line' id='LC682'><span class="s">    -s &lt;spare size&gt;  set spare size in Byte  (default: autodetect, max: %d)</span><span class="se">\n</span><span class="s">\</span></div><div class='line' id='LC683'><span class="s">    -t               list image contents</span><span class="se">\n</span><span class="s">\</span></div><div class='line' id='LC684'><span class="s">    -v               verbose output</span><span class="se">\n</span><span class="s">\</span></div><div class='line' id='LC685'><span class="s">    -V               print version</span><span class="se">\n</span><span class="s">\</span></div><div class='line' id='LC686'><span class="s">&quot;</span><span class="p">,</span> <span class="n">VERSION</span><span class="p">,</span> <span class="n">MAX_CHUNK_SIZE</span> <span class="o">/</span> <span class="mi">1024</span><span class="p">,</span> <span class="n">MAX_SPARE_SIZE</span><span class="p">);</span></div><div class='line' id='LC687'>	<span class="n">exit</span><span class="p">(</span><span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC688'><span class="p">}</span></div><div class='line' id='LC689'><br/></div><div class='line' id='LC690'><span class="kt">int</span> <span class="nf">main</span><span class="p">(</span><span class="kt">int</span> <span class="n">argc</span><span class="p">,</span> <span class="kt">char</span> <span class="o">**</span><span class="n">argv</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC691'>	<span class="kt">int</span> <span class="n">ch</span><span class="p">;</span></div><div class='line' id='LC692'>	<span class="kt">char</span> <span class="o">*</span><span class="n">ep</span><span class="p">;</span></div><div class='line' id='LC693'><br/></div><div class='line' id='LC694'>	<span class="kt">int</span> <span class="n">opt_detect</span><span class="p">;</span></div><div class='line' id='LC695'>	<span class="kt">int</span> <span class="n">opt_bad</span><span class="p">;</span></div><div class='line' id='LC696'>	<span class="kt">int</span> <span class="n">opt_chunk</span><span class="p">;</span></div><div class='line' id='LC697'>	<span class="kt">int</span> <span class="n">opt_spare</span><span class="p">;</span></div><div class='line' id='LC698'><br/></div><div class='line' id='LC699'>	<span class="cm">/* handle command line options */</span></div><div class='line' id='LC700'>	<span class="n">opt_detect</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC701'>	<span class="n">opt_bad</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC702'>	<span class="n">opt_chunk</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC703'>	<span class="n">opt_spare</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC704'>	<span class="n">opt_list</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC705'>	<span class="n">opt_verbose</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC706'>	<span class="k">while</span> <span class="p">((</span><span class="n">ch</span> <span class="o">=</span> <span class="n">getopt</span><span class="p">(</span><span class="n">argc</span><span class="p">,</span> <span class="n">argv</span><span class="p">,</span> <span class="s">&quot;dbc:s:tvVh?&quot;</span><span class="p">))</span> <span class="o">&gt;</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC707'>		<span class="k">switch</span> <span class="p">(</span><span class="n">ch</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC708'>			<span class="k">case</span> <span class="sc">&#39;d&#39;</span>:</div><div class='line' id='LC709'>				<span class="n">opt_detect</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC710'>				<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC711'>			<span class="k">case</span> <span class="sc">&#39;b&#39;</span>:</div><div class='line' id='LC712'>				<span class="n">opt_bad</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC713'>				<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC714'>			<span class="k">case</span> <span class="sc">&#39;c&#39;</span>:</div><div class='line' id='LC715'>				<span class="n">opt_chunk</span> <span class="o">=</span> <span class="n">strtol</span><span class="p">(</span><span class="n">optarg</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">ep</span><span class="p">,</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC716'>				<span class="k">if</span> <span class="p">(</span><span class="o">*</span><span class="n">ep</span> <span class="o">!=</span> <span class="sc">&#39;\0&#39;</span> <span class="o">||</span></div><div class='line' id='LC717'>				    <span class="n">opt_chunk</span> <span class="o">&lt;</span> <span class="mi">0</span> <span class="o">||</span></div><div class='line' id='LC718'>				    <span class="n">opt_chunk</span> <span class="o">&gt;</span> <span class="p">(</span><span class="n">MAX_CHUNK_SIZE</span> <span class="o">/</span> <span class="mi">1024</span><span class="p">)</span> <span class="p">)</span></div><div class='line' id='LC719'>					<span class="n">usage</span><span class="p">();</span></div><div class='line' id='LC720'>				<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC721'>			<span class="k">case</span> <span class="sc">&#39;s&#39;</span>:</div><div class='line' id='LC722'>				<span class="n">opt_spare</span> <span class="o">=</span> <span class="n">strtol</span><span class="p">(</span><span class="n">optarg</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">ep</span><span class="p">,</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC723'>				<span class="k">if</span> <span class="p">(</span><span class="o">*</span><span class="n">ep</span> <span class="o">!=</span> <span class="sc">&#39;\0&#39;</span> <span class="o">||</span></div><div class='line' id='LC724'>				    <span class="n">opt_spare</span> <span class="o">&lt;</span> <span class="mi">0</span> <span class="o">||</span></div><div class='line' id='LC725'>				    <span class="n">opt_chunk</span> <span class="o">&gt;</span> <span class="n">MAX_SPARE_SIZE</span><span class="p">)</span></div><div class='line' id='LC726'>					<span class="n">usage</span><span class="p">();</span></div><div class='line' id='LC727'>				<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC728'>			<span class="k">case</span> <span class="sc">&#39;t&#39;</span>:</div><div class='line' id='LC729'>				<span class="n">opt_list</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC730'>				<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC731'>			<span class="k">case</span> <span class="sc">&#39;v&#39;</span>:</div><div class='line' id='LC732'>				<span class="n">opt_verbose</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC733'>				<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC734'>			<span class="k">case</span> <span class="sc">&#39;V&#39;</span>:</div><div class='line' id='LC735'>				<span class="n">printf</span><span class="p">(</span><span class="s">&quot;V%s</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">VERSION</span><span class="p">);</span></div><div class='line' id='LC736'>				<span class="n">exit</span><span class="p">(</span><span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC737'>				<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC738'>			<span class="k">case</span> <span class="sc">&#39;h&#39;</span>:</div><div class='line' id='LC739'>			<span class="k">case</span> <span class="sc">&#39;?&#39;</span>:</div><div class='line' id='LC740'>			<span class="nl">default:</span></div><div class='line' id='LC741'>				<span class="n">usage</span><span class="p">();</span></div><div class='line' id='LC742'>				<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC743'>&nbsp;&nbsp;&nbsp;&nbsp;		<span class="p">}</span></div><div class='line' id='LC744'>	<span class="p">}</span></div><div class='line' id='LC745'><br/></div><div class='line' id='LC746'>	<span class="cm">/* extract rest of command line parameters */</span></div><div class='line' id='LC747'>	<span class="k">if</span> <span class="p">((</span><span class="n">argc</span> <span class="o">-</span> <span class="n">optind</span><span class="p">)</span> <span class="o">&lt;</span> <span class="mi">1</span> <span class="o">||</span> <span class="p">(</span><span class="n">argc</span> <span class="o">-</span> <span class="n">optind</span><span class="p">)</span> <span class="o">&gt;</span> <span class="mi">2</span><span class="p">)</span></div><div class='line' id='LC748'>		<span class="n">usage</span><span class="p">();</span></div><div class='line' id='LC749'><br/></div><div class='line' id='LC750'>	<span class="k">if</span> <span class="p">(</span><span class="n">strcmp</span><span class="p">(</span><span class="n">argv</span><span class="p">[</span><span class="n">optind</span><span class="p">],</span> <span class="s">&quot;-&quot;</span><span class="p">)</span> <span class="o">==</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span>	<span class="cm">/* image file from stdin ? */</span></div><div class='line' id='LC751'>		<span class="n">img_file</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC752'>	<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC753'>		<span class="n">img_file</span> <span class="o">=</span> <span class="n">open</span><span class="p">(</span><span class="n">argv</span><span class="p">[</span><span class="n">optind</span><span class="p">],</span> <span class="n">O_RDONLY</span><span class="p">);</span></div><div class='line' id='LC754'>		<span class="k">if</span> <span class="p">(</span><span class="n">img_file</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC755'>			<span class="n">prt_err</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="n">errno</span><span class="p">,</span> <span class="s">&quot;Open image file failed&quot;</span><span class="p">);</span></div><div class='line' id='LC756'>	<span class="p">}</span></div><div class='line' id='LC757'><br/></div><div class='line' id='LC758'>	<span class="k">if</span> <span class="p">(</span><span class="n">opt_detect</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC759'>		<span class="n">detect_flash_layout</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC760'>		<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC761'>	<span class="p">}</span></div><div class='line' id='LC762'><br/></div><div class='line' id='LC763'>	<span class="k">if</span> <span class="p">(</span><span class="n">opt_chunk</span> <span class="o">==</span> <span class="mi">0</span> <span class="o">||</span> <span class="n">opt_spare</span> <span class="o">==</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC764'>		<span class="n">detect_flash_layout</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span> <span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC765'>		<span class="k">if</span> <span class="p">(</span><span class="n">opt_verbose</span><span class="p">)</span></div><div class='line' id='LC766'>			<span class="n">prt_err</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span></div><div class='line' id='LC767'>		        	<span class="s">&quot;Header check OK, chunk size = %dK, spare size = %d, %sbad block info.&quot;</span><span class="p">,</span></div><div class='line' id='LC768'>		        	<span class="n">chunk_size</span><span class="o">/</span><span class="mi">1024</span><span class="p">,</span> <span class="n">spare_size</span><span class="p">,</span> <span class="n">spare_off</span> <span class="o">?</span> <span class="s">&quot;&quot;</span> <span class="o">:</span> <span class="s">&quot;no &quot;</span><span class="p">);</span></div><div class='line' id='LC769'>	<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC770'>		<span class="n">chunk_size</span> <span class="o">=</span> <span class="n">opt_chunk</span> <span class="o">*</span> <span class="mi">1024</span><span class="p">;</span></div><div class='line' id='LC771'>		<span class="n">spare_size</span> <span class="o">=</span> <span class="n">opt_spare</span><span class="p">;</span></div><div class='line' id='LC772'>		<span class="n">spare_off</span>  <span class="o">=</span> <span class="n">opt_bad</span> <span class="o">?</span> <span class="mi">2</span> <span class="o">:</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC773'>	<span class="p">}</span></div><div class='line' id='LC774'>	<span class="n">spare_data</span> <span class="o">=</span> <span class="n">data</span> <span class="o">+</span> <span class="n">chunk_size</span><span class="p">;</span></div><div class='line' id='LC775'><br/></div><div class='line' id='LC776'>	<span class="k">if</span> <span class="p">((</span><span class="n">argc</span> <span class="o">-</span> <span class="n">optind</span><span class="p">)</span> <span class="o">==</span> <span class="mi">2</span> <span class="o">&amp;&amp;</span> <span class="o">!</span><span class="n">opt_list</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC777'>		<span class="k">if</span> <span class="p">(</span><span class="n">mkdirpath</span><span class="p">(</span><span class="n">argv</span><span class="p">[</span><span class="n">optind</span><span class="o">+</span><span class="mi">1</span><span class="p">],</span> <span class="mo">0755</span><span class="p">)</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC778'>			<span class="n">prt_err</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="n">errno</span><span class="p">,</span> <span class="s">&quot;Can&#39;t mkdir %s&quot;</span><span class="p">,</span> <span class="n">argv</span><span class="p">[</span><span class="n">optind</span><span class="o">+</span><span class="mi">1</span><span class="p">]);</span></div><div class='line' id='LC779'>		<span class="k">if</span> <span class="p">(</span><span class="n">chdir</span><span class="p">(</span><span class="n">argv</span><span class="p">[</span><span class="n">optind</span><span class="o">+</span><span class="mi">1</span><span class="p">])</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC780'>			<span class="n">prt_err</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="n">errno</span><span class="p">,</span> <span class="s">&quot;Can&#39;t chdir to %s&quot;</span><span class="p">,</span> <span class="n">argv</span><span class="p">[</span><span class="n">optind</span><span class="o">+</span><span class="mi">1</span><span class="p">]);</span></div><div class='line' id='LC781'>	<span class="p">}</span></div><div class='line' id='LC782'><br/></div><div class='line' id='LC783'>	<span class="n">umask</span><span class="p">(</span><span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC784'><br/></div><div class='line' id='LC785'>	<span class="n">init_obj_list</span><span class="p">();</span></div><div class='line' id='LC786'>	<span class="n">saved_chunk</span><span class="p">.</span><span class="n">objectId</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC787'>	<span class="k">while</span> <span class="p">(</span><span class="n">read_chunk</span><span class="p">())</span> <span class="p">{</span></div><div class='line' id='LC788'>		<span class="n">process_chunk</span><span class="p">();</span></div><div class='line' id='LC789'>	<span class="p">}</span></div><div class='line' id='LC790'>	<span class="n">set_dirs_utime</span><span class="p">();</span></div><div class='line' id='LC791'>	<span class="n">close</span><span class="p">(</span><span class="n">img_file</span><span class="p">);</span></div><div class='line' id='LC792'><br/></div><div class='line' id='LC793'>	<span class="k">if</span> <span class="p">(</span><span class="n">warn_chown</span><span class="p">)</span></div><div class='line' id='LC794'><span class="cp">#ifdef __CYGWIN__</span></div><div class='line' id='LC795'>		<span class="n">prt_err</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="s">&quot;Warning: Can&#39;t restore owner/group attribute (limitation of Cygwin/Windows)&quot;</span><span class="p">);</span></div><div class='line' id='LC796'><span class="cp">#else</span></div><div class='line' id='LC797'>		<span class="n">prt_err</span><span class="p">(</span><span class="mi">0</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="s">&quot;Warning: Can&#39;t restore owner/group attribute, run unyaffs as root&quot;</span><span class="p">);</span></div><div class='line' id='LC798'><span class="cp">#endif</span></div><div class='line' id='LC799'><br/></div><div class='line' id='LC800'>	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC801'><span class="p">}</span></div></pre></div>
          </td>
        </tr>
      </table>
  </div>

          </div>
        </div>
      </div>
    </div>

  </div>

<div class="frame frame-loading large-loading-area" style="display:none;" data-tree-list-url="/ehlers/unyaffs/tree-list/44e4b2e19288400062da4eb2525cbf2f09c65c20" data-blob-url-prefix="/ehlers/unyaffs/blob/44e4b2e19288400062da4eb2525cbf2f09c65c20">
  <img src="https://a248.e.akamai.net/assets.github.com/images/spinners/octocat-spinner-128.gif?1347543527" height="64" width="64">
</div>

        </div>
      </div>
      <div class="context-overlay"></div>
    </div>

      <div id="footer-push"></div><!-- hack for sticky footer -->
    </div><!-- end of wrapper - hack for sticky footer -->

      <!-- footer -->
      <div id="footer" >
        
  <div class="upper_footer">
     <div class="container clearfix">

       <!--[if IE]><h4 id="blacktocat_ie">GitHub Links</h4><![endif]-->
       <![if !IE]><h4 id="blacktocat">GitHub Links</h4><![endif]>

       <ul class="footer_nav">
         <h4>GitHub</h4>
         <li><a href="https://github.com/about">About</a></li>
         <li><a href="https://github.com/blog">Blog</a></li>
         <li><a href="https://github.com/features">Features</a></li>
         <li><a href="https://github.com/contact">Contact &amp; Support</a></li>
         <li><a href="https://github.com/training">Training</a></li>
         <li><a href="http://enterprise.github.com/">GitHub Enterprise</a></li>
         <li><a href="http://status.github.com/">Site Status</a></li>
       </ul>

       <ul class="footer_nav">
         <h4>Clients</h4>
         <li><a href="http://mac.github.com/">GitHub for Mac</a></li>
         <li><a href="http://windows.github.com/">GitHub for Windows</a></li>
         <li><a href="http://eclipse.github.com/">GitHub for Eclipse</a></li>
         <li><a href="http://mobile.github.com/">GitHub Mobile Apps</a></li>
       </ul>

       <ul class="footer_nav">
         <h4>Tools</h4>
         <li><a href="http://get.gaug.es/">Gauges: Web analytics</a></li>
         <li><a href="http://speakerdeck.com">Speaker Deck: Presentations</a></li>
         <li><a href="https://gist.github.com">Gist: Code snippets</a></li>

         <h4 class="second">Extras</h4>
         <li><a href="http://jobs.github.com/">Job Board</a></li>
         <li><a href="http://shop.github.com/">GitHub Shop</a></li>
         <li><a href="http://octodex.github.com/">The Octodex</a></li>
       </ul>

       <ul class="footer_nav">
         <h4>Documentation</h4>
         <li><a href="http://help.github.com/">GitHub Help</a></li>
         <li><a href="http://developer.github.com/">Developer API</a></li>
         <li><a href="http://github.github.com/github-flavored-markdown/">GitHub Flavored Markdown</a></li>
         <li><a href="http://pages.github.com/">GitHub Pages</a></li>
       </ul>

     </div><!-- /.site -->
  </div><!-- /.upper_footer -->

<div class="lower_footer">
  <div class="container clearfix">
    <!--[if IE]><div id="legal_ie"><![endif]-->
    <![if !IE]><div id="legal"><![endif]>
      <ul>
          <li><a href="https://github.com/site/terms">Terms of Service</a></li>
          <li><a href="https://github.com/site/privacy">Privacy</a></li>
          <li><a href="https://github.com/security">Security</a></li>
      </ul>

      <p>&copy; 2012 <span title="0.05880s from fe19.rs.github.com">GitHub</span> Inc. All rights reserved.</p>
    </div><!-- /#legal or /#legal_ie-->

  </div><!-- /.site -->
</div><!-- /.lower_footer -->

      </div><!-- /#footer -->

    

<div id="keyboard_shortcuts_pane" class="instapaper_ignore readability-extra" style="display:none">
  <h2>Keyboard Shortcuts <small><a href="#" class="js-see-all-keyboard-shortcuts">(see all)</a></small></h2>

  <div class="columns threecols">
    <div class="column first">
      <h3>Site wide shortcuts</h3>
      <dl class="keyboard-mappings">
        <dt>s</dt>
        <dd>Focus command bar</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>?</dt>
        <dd>Bring up this help dialog</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column middle" style='display:none'>
      <h3>Commit list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selection down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selection up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>c <em>or</em> o <em>or</em> enter</dt>
        <dd>Open commit</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>y</dt>
        <dd>Expand URL to its canonical form</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column last js-hidden-pane" style='display:none'>
      <h3>Pull request list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selection down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selection up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>o <em>or</em> enter</dt>
        <dd>Open issue</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> enter</dt>
        <dd>Submit comment</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> shift p</dt>
        <dd>Preview comment</dd>
      </dl>
    </div><!-- /.columns.last -->

  </div><!-- /.columns.equacols -->

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>

    <h3>Issues</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selection down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selection up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>x</dt>
          <dd>Toggle selection</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open issue</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> enter</dt>
          <dd>Submit comment</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> shift p</dt>
          <dd>Preview comment</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>c</dt>
          <dd>Create issue</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Create label</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>i</dt>
          <dd>Back to inbox</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>u</dt>
          <dd>Back to issues</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>/</dt>
          <dd>Focus issues search</dd>
        </dl>
      </div>
    </div>
  </div>

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>

    <h3>Issues Dashboard</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selection down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selection up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open issue</dd>
        </dl>
      </div><!-- /.column.first -->
    </div>
  </div>

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>

    <h3>Network Graph</h3>
    <div class="columns equacols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt><span class="badmono">←</span> <em>or</em> h</dt>
          <dd>Scroll left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">→</span> <em>or</em> l</dt>
          <dd>Scroll right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↑</span> <em>or</em> k</dt>
          <dd>Scroll up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↓</span> <em>or</em> j</dt>
          <dd>Scroll down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Toggle visibility of head labels</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">←</span> <em>or</em> shift h</dt>
          <dd>Scroll all the way left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">→</span> <em>or</em> shift l</dt>
          <dd>Scroll all the way right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↑</span> <em>or</em> shift k</dt>
          <dd>Scroll all the way up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↓</span> <em>or</em> shift j</dt>
          <dd>Scroll all the way down</dd>
        </dl>
      </div><!-- /.column.last -->
    </div>
  </div>

  <div class="js-hidden-pane" >
    <div class="rule"></div>
    <div class="columns threecols">
      <div class="column first js-hidden-pane" >
        <h3>Source Code Browsing</h3>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Activates the file finder</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Jump to line</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>w</dt>
          <dd>Switch branch/tag</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>y</dt>
          <dd>Expand URL to its canonical form</dd>
        </dl>
      </div>
    </div>
  </div>

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>
    <div class="columns threecols">
      <div class="column first">
        <h3>Browsing Commits</h3>
        <dl class="keyboard-mappings">
          <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> enter</dt>
          <dd>Submit comment</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>escape</dt>
          <dd>Close form</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>p</dt>
          <dd>Parent commit</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o</dt>
          <dd>Other parent commit</dd>
        </dl>
      </div>
    </div>
  </div>

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>
    <h3>Notifications</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selection down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selection up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open notification</dd>
        </dl>
      </div><!-- /.column.first -->

      <div class="column second">
        <dl class="keyboard-mappings">
          <dt>e <em>or</em> shift i <em>or</em> y</dt>
          <dd>Mark as read</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift m</dt>
          <dd>Mute thread</dd>
        </dl>
      </div><!-- /.column.first -->
    </div>
  </div>

</div>

    <div id="markdown-help" class="instapaper_ignore readability-extra">
  <h2>Markdown Cheat Sheet</h2>

  <div class="cheatsheet-content">

  <div class="mod">
    <div class="col">
      <h3>Format Text</h3>
      <p>Headers</p>
      <pre>
# This is an &lt;h1&gt; tag
## This is an &lt;h2&gt; tag
###### This is an &lt;h6&gt; tag</pre>
     <p>Text styles</p>
     <pre>
*This text will be italic*
_This will also be italic_
**This text will be bold**
__This will also be bold__

*You **can** combine them*
</pre>
    </div>
    <div class="col">
      <h3>Lists</h3>
      <p>Unordered</p>
      <pre>
* Item 1
* Item 2
  * Item 2a
  * Item 2b</pre>
     <p>Ordered</p>
     <pre>
1. Item 1
2. Item 2
3. Item 3
   * Item 3a
   * Item 3b</pre>
    </div>
    <div class="col">
      <h3>Miscellaneous</h3>
      <p>Images</p>
      <pre>
![GitHub Logo](/images/logo.png)
Format: ![Alt Text](url)
</pre>
     <p>Links</p>
     <pre>
http://github.com - automatic!
[GitHub](http://github.com)</pre>
<p>Blockquotes</p>
     <pre>
As Kanye West said:

> We're living the future so
> the present is our past.
</pre>
    </div>
  </div>
  <div class="rule"></div>

  <h3>Code Examples in Markdown</h3>
  <div class="col">
      <p>Syntax highlighting with <a href="http://github.github.com/github-flavored-markdown/" title="GitHub Flavored Markdown" target="_blank">GFM</a></p>
      <pre>
```javascript
function fancyAlert(arg) {
  if(arg) {
    $.facebox({div:'#foo'})
  }
}
```</pre>
    </div>
    <div class="col">
      <p>Or, indent your code 4 spaces</p>
      <pre>
Here is a Python code example
without syntax highlighting:

    def foo:
      if not bar:
        return true</pre>
    </div>
    <div class="col">
      <p>Inline code for comments</p>
      <pre>
I think you should use an
`&lt;addr&gt;` element here instead.</pre>
    </div>
  </div>

  </div>
</div>


    <div id="ajax-error-message" class="flash flash-error">
      <span class="mini-icon mini-icon-exclamation"></span>
      Something went wrong with that request. Please try again.
      <a href="#" class="mini-icon mini-icon-remove-close ajax-error-dismiss"></a>
    </div>

    <div id="logo-popup">
      <h2>Looking for the GitHub logo?</h2>
      <ul>
        <li>
          <h4>GitHub Logo</h4>
          <a href="http://github-media-downloads.s3.amazonaws.com/GitHub_Logos.zip"><img alt="Github_logo" src="https://a248.e.akamai.net/assets.github.com/images/modules/about_page/github_logo.png?1340935010" /></a>
          <a href="http://github-media-downloads.s3.amazonaws.com/GitHub_Logos.zip" class="minibutton download">Download</a>
        </li>
        <li>
          <h4>The Octocat</h4>
          <a href="http://github-media-downloads.s3.amazonaws.com/Octocats.zip"><img alt="Octocat" src="https://a248.e.akamai.net/assets.github.com/images/modules/about_page/octocat.png?1340935010" /></a>
          <a href="http://github-media-downloads.s3.amazonaws.com/Octocats.zip" class="minibutton download">Download</a>
        </li>
      </ul>
    </div>

    
    
    <span id='server_response_time' data-time='0.06115' data-host='fe19'></span>
    
  </body>
</html>

