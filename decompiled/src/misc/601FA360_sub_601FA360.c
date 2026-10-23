/* sub_601FA360
 * address: 0x601FA360   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_601FA360(float *result)
{
  float *v1; // r4
  unsigned int v2; // r1
  float v3; // r6
  float v4; // r7
  float v5; // r5
  ActorBuildInfo v6; // [sp+4h] [bp-44h] BYREF

  v1 = result;
  v2 = *((_DWORD *)result + 4);
  if ( v2 )
  {
    result = (float *)ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
    if ( result )
    {
      v3 = result[20];
      v4 = result[21];
      v5 = result[22];
      memset(&v6.settings2, 0, 40);
      v6.settings1 = 1;
      v6.eventId2 = 7;
      v6.field_20 = 0;
      v6.movementId = 0;
      v6.position.x = v3;
      v6.position.y = v4;
      v6.position.z = v5;
      v6.profile = Profile__get(0x36Fu);
      result = (float *)ActorMgr__create((void *)ActorMgr__instance, &v6, 0);
      if ( result )
      {
        result = *((float **)result + 2);
        *((_DWORD *)v1 + 5) = result;
      }
    }
  }
  return result;
}
