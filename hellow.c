#include <stdio.h>
#include <curl/curl.h>
int main(void)
{
 CURL *curl;
 CURLcode res;
 cur1=curl_ easy_ init();
 if(cur1){
 curl_ easy_ setopt (curl , CURLOPT _URL, "http://myip. ipip.net/");
 res=cur1_ easy_ perform(curl);
 if(res!=CURLE_ _OK)
 fprintf(stderr, "curl_ easy_ perform() failed:%s\n",
 curl_ easy_ strerror(res));
 curl_ easy_ cleanup(cur1); .
 }
 return 0;
}
