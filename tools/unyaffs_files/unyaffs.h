  


<!DOCTYPE html>
<html>
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# githubog: http://ogp.me/ns/fb/githubog#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <title>unyaffs/unyaffs.h at master · ehlers/unyaffs · GitHub</title>
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
    

      <link rel='permalink' href='/ehlers/unyaffs/blob/44e4b2e19288400062da4eb2525cbf2f09c65c20/unyaffs.h'>
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
      <li class="login"><a href="https://github.com/login?return_to=%2Fehlers%2Funyaffs%2Fblob%2Fmaster%2Funyaffs.h">Sign in</a></li>
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
                    <a href="/ehlers/unyaffs/blob/master/unyaffs.h" class="js-navigation-open" data-name="master" rel="nofollow">master</a>
                </h4>
              </div>
          </div>

          <div class="js-filter-tab js-filter-tags" style="display:none" data-filterable-for="context-commitish-filter-field" data-filterable-type=substring>
            <div class="no-results js-not-filterable">Nothing to show</div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/ehlers/unyaffs/blob/0.9.4/unyaffs.h" class="js-navigation-open" data-name="0.9.4" rel="nofollow">0.9.4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/ehlers/unyaffs/blob/0.9.3/unyaffs.h" class="js-navigation-open" data-name="0.9.3" rel="nofollow">0.9.3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/ehlers/unyaffs/blob/0.9.2/unyaffs.h" class="js-navigation-open" data-name="0.9.2" rel="nofollow">0.9.2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/ehlers/unyaffs/blob/0.9.1/unyaffs.h" class="js-navigation-open" data-name="0.9.1" rel="nofollow">0.9.1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/ehlers/unyaffs/blob/0.9/unyaffs.h" class="js-navigation-open" data-name="0.9" rel="nofollow">0.9</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/ehlers/unyaffs/blob/0.8/unyaffs.h" class="js-navigation-open" data-name="0.8" rel="nofollow">0.8</a>
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
          


<!-- blob contrib key: blob_contributors:v21:07d40a91a4e260a69f4a849539a96a6c -->
<!-- blob contrib frag key: views10/v8/blob_contributors:v21:07d40a91a4e260a69f4a849539a96a6c -->

<!-- block_view_fragment_key: views10/v8/blob:v21:0d0823d8d07d2918ef88ba0bf9428333 -->

  <div id="slider">

    <div class="breadcrumb" data-path="unyaffs.h/">
      <b itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/ehlers/unyaffs/tree/44e4b2e19288400062da4eb2525cbf2f09c65c20" class="js-rewrite-sha" itemprop="url"><span itemprop="title">unyaffs</span></a></b> / <strong class="final-path">unyaffs.h</strong> <span class="js-clippy mini-icon mini-icon-clippy " data-clipboard-text="unyaffs.h" data-copied-hint="copied!" data-copy-hint="copy to clipboard"></span>
    </div>

      <div class="commit file-history-tease js-blob-contributors-loader" data-request-url="/ehlers/unyaffs/contributors/master/unyaffs.h" data-path="unyaffs.h/">
        Fetching contributors…

        <div class="participation">
          <p class="quickstat js-loading-status-text"><img alt="Octocat-spinner-32-eaf2f5" height="16" src="https://a248.e.akamai.net/assets.github.com/images/spinners/octocat-spinner-32-EAF2F5.gif?1340935010" width="16" /></p>
        </div>
      </div>

    <div class="frames">
      <div class="frame frame-center" data-path="unyaffs.h/" data-permalink-url="/ehlers/unyaffs/blob/44e4b2e19288400062da4eb2525cbf2f09c65c20/unyaffs.h" data-title="unyaffs/unyaffs.h at master · ehlers/unyaffs · GitHub" data-type="blob">

        <div id="files" class="bubble">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><b class="mini-icon mini-icon-text-file"></b></span>
                <span class="mode" title="File Mode">file</span>
                  <span>100 lines (75 sloc)</span>
                <span>2.112 kb</span>
              </div>
              <ul class="button-group actions">
                  <li>
                    <a class="grouped-button file-edit-link minibutton bigger lighter js-rewrite-sha" href="/ehlers/unyaffs/edit/44e4b2e19288400062da4eb2525cbf2f09c65c20/unyaffs.h" data-method="post" rel="nofollow" data-hotkey="e">Edit</a>
                  </li>
                <li>
                  <a href="/ehlers/unyaffs/raw/master/unyaffs.h" class="minibutton grouped-button bigger lighter" id="raw-url">Raw</a>
                </li>
                  <li>
                    <a href="/ehlers/unyaffs/blame/master/unyaffs.h" class="minibutton grouped-button bigger lighter">Blame</a>
                  </li>
                <li>
                  <a href="/ehlers/unyaffs/commits/master/unyaffs.h" class="minibutton grouped-button bigger lighter" rel="nofollow">History</a>
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
</pre>
          </td>
          <td width="100%">
                <div class="highlight"><pre><div class='line' id='LC1'><span class="cm">/*</span></div><div class='line' id='LC2'><span class="cm"> * definition copied from yaffs project</span></div><div class='line' id='LC3'><span class="cm"> */</span></div><div class='line' id='LC4'><br/></div><div class='line' id='LC5'><span class="cp">#ifndef __UNYAFFS_H__</span></div><div class='line' id='LC6'><span class="cp">#define __UNYAFFS_H__</span></div><div class='line' id='LC7'><br/></div><div class='line' id='LC8'><br/></div><div class='line' id='LC9'><span class="cp">#define YAFFS_MAX_NAME_LENGTH	255</span></div><div class='line' id='LC10'><span class="cp">#define YAFFS_MAX_ALIAS_LENGTH	159</span></div><div class='line' id='LC11'><br/></div><div class='line' id='LC12'><span class="cm">/* Definition of types */</span></div><div class='line' id='LC13'><span class="k">typedef</span> <span class="kt">unsigned</span> <span class="kt">char</span> <span class="n">__u8</span><span class="p">;</span></div><div class='line' id='LC14'><span class="k">typedef</span> <span class="kt">unsigned</span> <span class="kt">short</span> <span class="n">__u16</span><span class="p">;</span></div><div class='line' id='LC15'><span class="k">typedef</span> <span class="kt">unsigned</span> <span class="n">__u32</span><span class="p">;</span></div><div class='line' id='LC16'><br/></div><div class='line' id='LC17'><span class="k">typedef</span> <span class="k">struct</span> <span class="p">{</span></div><div class='line' id='LC18'>	<span class="kt">unsigned</span> <span class="n">sequenceNumber</span><span class="p">;</span></div><div class='line' id='LC19'>	<span class="kt">unsigned</span> <span class="n">objectId</span><span class="p">;</span></div><div class='line' id='LC20'>	<span class="kt">unsigned</span> <span class="n">chunkId</span><span class="p">;</span></div><div class='line' id='LC21'>	<span class="kt">unsigned</span> <span class="n">byteCount</span><span class="p">;</span></div><div class='line' id='LC22'><span class="p">}</span> <span class="n">yaffs_PackedTags2TagsPart</span><span class="p">;</span></div><div class='line' id='LC23'><br/></div><div class='line' id='LC24'><span class="k">typedef</span> <span class="k">struct</span> <span class="p">{</span></div><div class='line' id='LC25'>	<span class="kt">unsigned</span> <span class="kt">char</span> <span class="n">colParity</span><span class="p">;</span></div><div class='line' id='LC26'>	<span class="kt">unsigned</span> <span class="n">lineParity</span><span class="p">;</span></div><div class='line' id='LC27'>	<span class="kt">unsigned</span> <span class="n">lineParityPrime</span><span class="p">;</span></div><div class='line' id='LC28'><span class="p">}</span> <span class="n">yaffs_ECCOther</span><span class="p">;</span></div><div class='line' id='LC29'><br/></div><div class='line' id='LC30'><span class="k">typedef</span> <span class="k">struct</span> <span class="p">{</span></div><div class='line' id='LC31'>	<span class="n">yaffs_PackedTags2TagsPart</span> <span class="n">t</span><span class="p">;</span></div><div class='line' id='LC32'>	<span class="n">yaffs_ECCOther</span> <span class="n">ecc</span><span class="p">;</span></div><div class='line' id='LC33'><span class="p">}</span> <span class="n">yaffs_PackedTags2</span><span class="p">;</span></div><div class='line' id='LC34'><br/></div><div class='line' id='LC35'><span class="k">typedef</span> <span class="k">enum</span> <span class="p">{</span></div><div class='line' id='LC36'>	<span class="n">YAFFS_OBJECT_TYPE_UNKNOWN</span><span class="p">,</span></div><div class='line' id='LC37'>	<span class="n">YAFFS_OBJECT_TYPE_FILE</span><span class="p">,</span></div><div class='line' id='LC38'>	<span class="n">YAFFS_OBJECT_TYPE_SYMLINK</span><span class="p">,</span></div><div class='line' id='LC39'>	<span class="n">YAFFS_OBJECT_TYPE_DIRECTORY</span><span class="p">,</span></div><div class='line' id='LC40'>	<span class="n">YAFFS_OBJECT_TYPE_HARDLINK</span><span class="p">,</span></div><div class='line' id='LC41'>	<span class="n">YAFFS_OBJECT_TYPE_SPECIAL</span></div><div class='line' id='LC42'><span class="p">}</span> <span class="n">yaffs_ObjectType</span><span class="p">;</span></div><div class='line' id='LC43'><br/></div><div class='line' id='LC44'><br/></div><div class='line' id='LC45'><span class="cm">/* -------------------------- Object structure -------------------------------*/</span></div><div class='line' id='LC46'><span class="cm">/* This is the object structure as stored on NAND */</span></div><div class='line' id='LC47'><br/></div><div class='line' id='LC48'><span class="k">typedef</span> <span class="k">struct</span> <span class="p">{</span></div><div class='line' id='LC49'>	<span class="n">yaffs_ObjectType</span> <span class="n">type</span><span class="p">;</span></div><div class='line' id='LC50'><br/></div><div class='line' id='LC51'>	<span class="cm">/* Apply to everything */</span></div><div class='line' id='LC52'>	<span class="kt">int</span> <span class="n">parentObjectId</span><span class="p">;</span></div><div class='line' id='LC53'>	<span class="n">__u16</span> <span class="n">sum__NoLongerUsed</span><span class="p">;</span>	<span class="cm">/* checksum of name. No longer used */</span></div><div class='line' id='LC54'>	<span class="kt">char</span> <span class="n">name</span><span class="p">[</span><span class="n">YAFFS_MAX_NAME_LENGTH</span> <span class="o">+</span> <span class="mi">1</span><span class="p">];</span></div><div class='line' id='LC55'><br/></div><div class='line' id='LC56'>	<span class="cm">/* The following apply to directories, files, symlinks - not hard links */</span></div><div class='line' id='LC57'>	<span class="n">__u32</span> <span class="n">yst_mode</span><span class="p">;</span>			<span class="cm">/* protection */</span></div><div class='line' id='LC58'><br/></div><div class='line' id='LC59'><span class="cp">#ifdef CONFIG_YAFFS_WINCE</span></div><div class='line' id='LC60'>	<span class="n">__u32</span> <span class="n">notForWinCE</span><span class="p">[</span><span class="mi">5</span><span class="p">];</span></div><div class='line' id='LC61'><span class="cp">#else</span></div><div class='line' id='LC62'>	<span class="n">__u32</span> <span class="n">yst_uid</span><span class="p">;</span></div><div class='line' id='LC63'>	<span class="n">__u32</span> <span class="n">yst_gid</span><span class="p">;</span></div><div class='line' id='LC64'>	<span class="n">__u32</span> <span class="n">yst_atime</span><span class="p">;</span></div><div class='line' id='LC65'>	<span class="n">__u32</span> <span class="n">yst_mtime</span><span class="p">;</span></div><div class='line' id='LC66'>	<span class="n">__u32</span> <span class="n">yst_ctime</span><span class="p">;</span></div><div class='line' id='LC67'><span class="cp">#endif</span></div><div class='line' id='LC68'><br/></div><div class='line' id='LC69'>	<span class="cm">/* File size applies to files only */</span></div><div class='line' id='LC70'>	<span class="kt">int</span> <span class="n">fileSize</span><span class="p">;</span></div><div class='line' id='LC71'><br/></div><div class='line' id='LC72'>	<span class="cm">/* Equivalent object id applies to hard links only. */</span></div><div class='line' id='LC73'>	<span class="kt">int</span> <span class="n">equivalentObjectId</span><span class="p">;</span></div><div class='line' id='LC74'><br/></div><div class='line' id='LC75'>	<span class="cm">/* Alias is for symlinks only. */</span></div><div class='line' id='LC76'>	<span class="kt">char</span> <span class="n">alias</span><span class="p">[</span><span class="n">YAFFS_MAX_ALIAS_LENGTH</span> <span class="o">+</span> <span class="mi">1</span><span class="p">];</span></div><div class='line' id='LC77'><br/></div><div class='line' id='LC78'>	<span class="n">__u32</span> <span class="n">yst_rdev</span><span class="p">;</span>		<span class="cm">/* device stuff for block and char devices (major/min) */</span></div><div class='line' id='LC79'><br/></div><div class='line' id='LC80'><span class="cp">#ifdef CONFIG_YAFFS_WINCE</span></div><div class='line' id='LC81'>	<span class="n">__u32</span> <span class="n">win_ctime</span><span class="p">[</span><span class="mi">2</span><span class="p">];</span></div><div class='line' id='LC82'>	<span class="n">__u32</span> <span class="n">win_atime</span><span class="p">[</span><span class="mi">2</span><span class="p">];</span></div><div class='line' id='LC83'>	<span class="n">__u32</span> <span class="n">win_mtime</span><span class="p">[</span><span class="mi">2</span><span class="p">];</span></div><div class='line' id='LC84'><span class="cp">#else</span></div><div class='line' id='LC85'>	<span class="n">__u32</span> <span class="n">roomToGrow</span><span class="p">[</span><span class="mi">6</span><span class="p">];</span></div><div class='line' id='LC86'><br/></div><div class='line' id='LC87'><span class="cp">#endif</span></div><div class='line' id='LC88'>	<span class="n">__u32</span> <span class="n">inbandShadowsObject</span><span class="p">;</span></div><div class='line' id='LC89'>	<span class="n">__u32</span> <span class="n">inbandIsShrink</span><span class="p">;</span></div><div class='line' id='LC90'><br/></div><div class='line' id='LC91'>	<span class="n">__u32</span> <span class="n">reservedSpace</span><span class="p">[</span><span class="mi">2</span><span class="p">];</span></div><div class='line' id='LC92'>	<span class="kt">int</span> <span class="n">shadowsObject</span><span class="p">;</span>	<span class="cm">/* This object header shadows the specified object if &gt; 0 */</span></div><div class='line' id='LC93'><br/></div><div class='line' id='LC94'>	<span class="cm">/* isShrink applies to object headers written when we shrink the file (ie resize) */</span></div><div class='line' id='LC95'>	<span class="n">__u32</span> <span class="n">isShrink</span><span class="p">;</span></div><div class='line' id='LC96'><br/></div><div class='line' id='LC97'><span class="p">}</span> <span class="n">yaffs_ObjectHeader</span><span class="p">;</span></div><div class='line' id='LC98'><br/></div><div class='line' id='LC99'><span class="cp">#endif</span></div></pre></div>
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

      <p>&copy; 2012 <span title="0.13440s from fe19.rs.github.com">GitHub</span> Inc. All rights reserved.</p>
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

    
    
    <span id='server_response_time' data-time='0.13650' data-host='fe19'></span>
    
  </body>
</html>

