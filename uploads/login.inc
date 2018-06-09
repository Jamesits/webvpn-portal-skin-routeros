<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<link rel="icon" href="/+CSCOU+/favicon.png"/>
<style type="text/css">
    body {
        font-family: Verdana, Geneva, sans-serif;
        font-size: 11px;
    }

    img {
        border: none
    }

    img:hover {
        opacity: 0.8;
    }

    h1 {
        font-size: 1.7em;
        display: inline;
        margin-bottom: 10px;
    }

    fieldset {
        margin-top: 20px;
        background: #fff;
        padding: 20px;
        border: 1px solid #c1c1c1;
    }

    #container {
        width: 70%;
        margin: 10% auto;
    }

    #box {
        background-color: #fff;
        -moz-border-radius: 7px;
        -webkit-border-radius: 7px;
        border: 1px solid #c1c1c1;
        padding: 30px;
        filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#ffffff', endColorstr='#f3f3f3');
        /* for IE */
        background: -webkit-gradient(linear, left top, left bottom, from(#fff), to(#f3f3f3));
        /* for webkit browsers */
        background: -moz-linear-gradient(top, #fff, #f3f3f3);
        /* for firefox 3.6+ */
    }

    .floater {
        float: left;
        margin-right: 10px;
    }

    .floater label {
        display: block;
        text-align: center;
    }

    #login_form * {
        font-family: Verdana, Geneva, sans-serif !important;
    }

    #login_form #logon_message_text {
        display: none;
    }

    #login_form #form_table {
        width: 280px !important;
        text-align: left;
    }

    #login_form #form_table table tr td:first-of-type::first-letter {
        text-transform: uppercase;
    }

    #login_form #form_table table tr td:first-of-type {
        text-transform: lowercase;
    }

    #login_form #form_table table tr:last-of-type {
        display: block;
        position: relative;
        top: -58px;
        left: 250px;
    }

    #login_form input[name=Login] {
        float: none;
        display: block;
        margin: 2px 4px 2px 0;
        padding: 5px;
        background: #ddd;
        border: 1px solid #888;
        border-radius: 3px;
        -moz-border-radius: 3px;
        box-shadow: 1px 1px 2px rgba(255, 255, 255, 0.8) inset, 0 10px 10px -5px rgba(255, 255, 255, 0.5) inset, 1px 1px 2px rgba(0, 0, 0, 0.2);
        -webkit-box-shadow: 1px 1px 2px rgba(255, 255, 255, 0.8) inset, 0 10px 10px -5px rgba(255, 255, 255, 0.5) inset, 1px 1px 2px rgba(0, 0, 0, 0.2);
        -moz-box-shadow: 1px 1px 2px rgba(255, 255, 255, 0.8) inset, 0 10px 10px -5px rgba(255, 255, 255, 0.5) inset, 1px 1px 2px rgba(0, 0, 0, 0.2);
        color: #000;
        text-decoration: none;
        text-align: center;
        white-space: nowrap;
        min-width: 52px;
        -webkit-transition: background 0.2s linear, box-shadow 0.2s ease-out;
        -moz-transition: background 0.2s linear, box-shadow 0.2s ease-out;
        font-size: 11px;
        font-weight: normal !important;
    }

    #login {
        margin: 2em 0 4em 0;
    }

    #login h2 {
        font-weight: normal;
        font-size: 14px;
        margin: 0 0 0.5em 1em;
    }

    #login td {
        padding: 0 4px 0 0;
    }

    #login td.label {
        text-align: right;
    }

    #login td.toolbar {
        padding: 0 0 0 1em;
        vertical-align: top;
    }

    #login ul.toolbar {
        margin: 0;
    }

    #login input {
        margin: 2px;
        padding: 2px;
        border: 1px solid #888;
        box-shadow: 1px 1px 3px rgba(0, 0, 0, 0.3);
        -webkit-box-shadow: 1px 1px 3px rgba(0, 0, 0, 0.3);
        -moz-box-shadow: 1px 1px 3px rgba(0, 0, 0, 0.3);
    }

    #error {
        display: none;
        color: red;
        padding: 1em 0 0 0;
    }

    ul.toolbar {
        font-size: 11px;
        text-align: left;
        list-style-type: none;
        padding: 0;
        margin: 2px 0 4px 2px;
    }

    ul.toolbar li {
        float: left;
        vertical-align: middle;
    }

    ul.toolbar a {
        float: none;
        display: block;
        margin: 2px 4px 2px 0;
        padding: 5px;

        background: #ddd;
        border: 1px solid #888;
        border-radius: 3px;
        -moz-border-radius: 3px;
        box-shadow: 1px 1px 2px rgba(255, 255, 255, 0.8) inset,
        0 10px 10px -5px rgba(255, 255, 255, 0.5) inset, /* top gradient */
        1px 1px 2px rgba(0, 0, 0, 0.2);
        /* shadow */
        -webkit-box-shadow: 1px 1px 2px rgba(255, 255, 255, 0.8) inset,
        0 10px 10px -5px rgba(255, 255, 255, 0.5) inset,
        1px 1px 2px rgba(0, 0, 0, 0.2);
        -moz-box-shadow: 1px 1px 2px rgba(255, 255, 255, 0.8) inset,
        0 10px 10px -5px rgba(255, 255, 255, 0.5) inset,
        1px 1px 2px rgba(0, 0, 0, 0.2);
        color: #000;

        text-decoration: none;
        text-align: center;
        white-space: nowrap;
        cursor: inherit;
        min-width: 4em;

        -webkit-transition: background 0.2s linear, box-shadow 0.2s ease-out;
        -moz-transition: background 0.2s linear, box-shadow 0.2s ease-out;
    }

    ul.toolbar a:hover {
        background: #eee;
    }

    ul.toolbar a:active {
        background: #aaa;
        box-shadow: 1px 1px 2px #999 inset;
        -webkit-box-shadow: 1px 1px 2px #999 inset;
        -moz-box-shadow: 1px 1px 2px #999 inset;
    }
</style>
<script>
    function loaded() {
        document.getElementById("telnet_link").setAttribute("href", "telnet://" + window.location.hostname);
        csco_ShowLoginForm('login_form');
        // csco_ShowLanguageSelcector('selector');
    }
</script>
</head>

<body onload="loaded()">
    <div id="container">
        <div id="box">
            <a href="http://mikrotik.com/">
                <img src="/+CSCOU+/mikrotik_logo.png" style="float: right;">
            </a>
            <br style="clear: both;">
            <h1>RouterOS v7.0rc43</h1>
            <p>You have connected to a router. Administrative access only. If this device is not in your possession, please
                contact your local network administrator. </p>
            <table id="login">
                <tbody>
                    <tr>
                        <td colspan="3">
                            <h2>WebFig Login:</h2>
                        </td>
                    </tr>
                    <!--<tr><td class="label">Login: </td><td><input id="name" tabindex="1" value="admin" type="text">
	 </td><td class="toolbar" rowspan="2">
         <ul class="toolbar">
	   <li><a onclick="dologin()" ondragstart="return false;"><span>Login</span></a></li>
         </ul>
         </td></tr><tr><td class="label">Password: </td><td><input id="password" tabindex="2" type="password">
	</td></tr><tr><td colspan="3">
	    <div id="error"></div>
      </td></tr>-->
                    <tr>
                        <td>
                            <div id="login_form"></div>
                        </td>
                    </tr>
                </tbody>
            </table>
            <fieldset>
                <div class="floater">
                    <a href="http://www.mikrotik.com/download/winbox.exe">
                        <img src="/+CSCOU+/winbox.png">
                    </a>
                    <br>
                    <label>Winbox</label>
                </div>
                <div class="floater">
                    <a id="telnet_link" href="">
                        <img src="/+CSCOU+/console.png">
                    </a>
                    <br>
                    <label>Telnet</label>
                </div>
                <div class="floater">
                    <a href="/+CSCOU+/graphs.html">
                        <img src="/+CSCOU+/green.png">
                    </a>
                    <br>
                    <label>Graphs</label>
                </div>
                <div class="floater">
                    <a href="/+CSCOU+/license.html">
                        <img src="/+CSCOU+/license.png">
                    </a>
                    <br>
                    <label>License</label>
                </div>
                <div class="floater">
                    <a href="http://wiki.mikrotik.com/">
                        <img src="/+CSCOU+/help.png">
                    </a>
                    <br>
                    <label>Help</label>
                </div>
            </fieldset>
            <br style="clear: both">
            <div style="float: right">&copy; mikrotik</div>
        </div>
    </div>