/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /private/var/folders/zs/2vsy8lqj1hzckz7rhwprb5wh0000gp/T/ralcocer/imageutility-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/private/var/folders/zs/2vsy8lqj1hzckz7rhwprb5wh0000gp/T/ralcocer/imageutility-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "com.alcoapps.imageutility.ImageutilityModule.h"
#include "com.alcoapps.imageutility.ExampleProxy.h"


#line 14 "/private/var/folders/zs/2vsy8lqj1hzckz7rhwprb5wh0000gp/T/ralcocer/imageutility-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 7, duplicates = 0 */

class ImageutilityBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
ImageutilityBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
ImageutilityBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 2,
      MIN_WORD_LENGTH = 38,
      MAX_WORD_LENGTH = 44,
      MIN_HASH_VALUE = 38,
      MAX_HASH_VALUE = 44
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 17 "/private/var/folders/zs/2vsy8lqj1hzckz7rhwprb5wh0000gp/T/ralcocer/imageutility-generated/KrollGeneratedBindings.gperf"
      {"com.alcoapps.imageutility.ExampleProxy", ::com::alcoapps::imageutility::imageutility::ExampleProxy::bindProxy, ::com::alcoapps::imageutility::imageutility::ExampleProxy::dispose},
      {""}, {""}, {""}, {""}, {""},
#line 16 "/private/var/folders/zs/2vsy8lqj1hzckz7rhwprb5wh0000gp/T/ralcocer/imageutility-generated/KrollGeneratedBindings.gperf"
      {"com.alcoapps.imageutility.ImageutilityModule", ::com::alcoapps::imageutility::ImageutilityModule::bindProxy, ::com::alcoapps::imageutility::ImageutilityModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 18 "/private/var/folders/zs/2vsy8lqj1hzckz7rhwprb5wh0000gp/T/ralcocer/imageutility-generated/KrollGeneratedBindings.gperf"

