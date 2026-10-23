/* UnsetResourcesLoadedForAllProfiles
 * address: 0x60009250   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall UnsetResourcesLoadedForAllProfiles(int profile)
{
  unsigned int i; // r5
  Profile *v3; // r0

  if ( profile )
  {
    for ( i = 0; i != 0x392; ++i )
    {
      if ( Profile_getHasResources(i) == profile )
      {
        v3 = Profile__get(i);
        if ( v3 )
          Profile_unsetResourcesLoaded(v3);
      }
    }
  }
}
