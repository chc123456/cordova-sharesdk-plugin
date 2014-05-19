
var exec = require("cordova/exec");

var ShareSdk = function () {
    this.name = "ShareSdk";
};

ShareSdk.prototype.send = function (message) {
    if (!message) {
        return;
    } 
    exec(null, null, "ShareSdk", "send", [message]);
};

module.exports = new ShareSdk();
