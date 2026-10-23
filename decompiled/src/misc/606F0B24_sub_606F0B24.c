/* sub_606F0B24
 * address: 0x606F0B24   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606F0B24(int a1)
{
  int v2; // r0
  int *v3; // r5
  int v4; // r0
  int result; // r0

  if ( (unsigned int)sub_600085D0(ActorMgr__instance, 562) < FIELD_U32(a1, 6772) )
  {
    v3 = (int *)(a1 + 6776);
    v2 = FIELD_U32(a1, 6776);
    if ( v2 )
    {
      v4 = v2 - 1;
      *v3 = v4;
    }
    else
    {
      v4 = 0;
    }
    if ( v4 == FIELD_U32(a1, 6784) )
    {
      sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6808) + 12) + 4));
      FIELD_U32(a1, 6792) = 3;
      v4 = *v3;
    }
    if ( v4 )
    {
      if ( v4 == 3 )
      {
        FIELD_U32(a1, 6796) = 0;
        FIELD_U8(a1, 6802) = 1;
        FIELD_U8(a1, 6800) = 0;
        FIELD_U8(a1, 6801) = 0;
        FIELD_U32(a1, 6804) = 0;
      }
    }
    else
    {
      SE_EMY_GORO_SHOT_ref(a1);
      *v3 = FIELD_U32(a1, 6780);
    }
  }
  result = FIELD_U32(a1, 6792);
  if ( result )
    JUMPOUT(0x606F0D70);
  return result;
}
