/* sub_6067C624
 * address: 0x6067C624   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067C624(int a1)
{
  _WORD *v1; // r4
  __int16 v2; // r7
  int result; // r0
  __int16 v4; // r5
  float *v5; // r6

  v1 = (_WORD *)(a1 + 10186);
  v2 = FIELD_U16(a1, 10186);
  result = 1042;
  v4 = *(v1 - 1);
  v5 = (float *)(v1 - 521);
  if ( (v2 & 1) != 0 )
  {
    result = v4 & 1;
    if ( (v4 & 1) == 0 )
    {
      result = FIELD_U32(PlayerMgr_instance, 32);
      if ( result )
        result = sub_60764338(*v5);
    }
  }
  if ( (v2 & 2) != 0 )
  {
    result = v4 & 2;
    if ( (v4 & 2) == 0 )
    {
      result = FIELD_U32(PlayerMgr_instance, 36);
      if ( result )
        result = sub_60764338(*v5);
    }
  }
  if ( (v2 & 4) != 0 )
  {
    result = v4 & 4;
    if ( (v4 & 4) == 0 )
    {
      result = FIELD_U32(PlayerMgr_instance, 40);
      if ( result )
        result = sub_60764338(*v5);
    }
  }
  if ( (v2 & 8) != 0 )
  {
    result = v4 & 8;
    if ( (v4 & 8) == 0 )
    {
      result = FIELD_U32(PlayerMgr_instance, 44);
      if ( result )
        result = sub_60764338(*v5);
    }
  }
  *v1 = v4;
  return result;
}
