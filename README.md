#  OpenFolio Demo Drupal ClickStart

[![Git](https://app.soluble.cloud/api/v1/public/badges/f57d748c-84de-408b-aabc-be6899083053.svg?orgId=451115019187)](https://app.soluble.cloud/repos/details/github.com/michaelneale/openfolio-clickstart?orgId=451115019187)  

Click on this to deploy this stack now:

<a href="https://grandcentral.cloudbees.com/?CB_clickstart=https://raw.github.com/benjaminsavoy/openfolio-clickstart/master/clickstart.json"><img src="https://d3ko533tu1ozfq.cloudfront.net/clickstart/deployInstantly_white.png"/></a>

## Notes:
The clickstart will install the <a href="http://drupal.org/project/openfolio">OpenFolio Drupal Project</a> automatically with a default user named 'admin' with password 'admin'.

Then, you can commit changes to git, and they will be published automatically. Enjoy!

## Modifications from original:

- sites/default/settings.php added
- includes/mail.inc changed (lines 183-188)
- Added modules and custom openfolio installation profile.
- Spyc added to rest server in services module