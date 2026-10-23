/* sub_604EE968
 * address: 0x604EE968   size: 712   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604EE968(int result)
{
  _DWORD *v1; // r1

  v1 = (_DWORD *)dword_60CC6D78;
  if ( FIELD_U32(dword_60CC6D78, 98488) == 15 )
  {
    *(_BYTE *)(FIELD_U32(result, 74360) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(result, 74364) + 64) &= ~1u;
  }
  if ( v1[24623] == 15 )
  {
    *(_BYTE *)(FIELD_U32(result, 74368) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(result, 74372) + 64) &= ~1u;
  }
  if ( v1[24624] == 15 )
  {
    *(_BYTE *)(FIELD_U32(result, 74376) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(result, 74380) + 64) &= ~1u;
  }
  if ( v1[24625] == 15 )
  {
    *(_BYTE *)(FIELD_U32(result, 74384) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(result, 74388) + 64) &= ~1u;
  }
  if ( v1[24626] == 15 )
  {
    *(_BYTE *)(FIELD_U32(result, 74392) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(result, 74396) + 64) &= ~1u;
  }
  if ( v1[24627] == 15 )
  {
    *(_BYTE *)(FIELD_U32(result, 74400) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(result, 74404) + 64) &= ~1u;
  }
  if ( v1[24628] == 15 )
  {
    *(_BYTE *)(FIELD_U32(result, 74408) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(result, 74412) + 64) &= ~1u;
  }
  if ( v1[24629] == 15 )
  {
    *(_BYTE *)(FIELD_U32(result, 74416) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(result, 74420) + 64) &= ~1u;
  }
  if ( v1[24630] == 15 )
  {
    *(_BYTE *)(FIELD_U32(result, 74424) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(result, 74428) + 64) &= ~1u;
  }
  if ( v1[24631] == 15 )
  {
    *(_BYTE *)(FIELD_U32(result, 74432) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(result, 74436) + 64) &= ~1u;
  }
  FIELD_U8(result, 74477) = 0;
  return result;
}
