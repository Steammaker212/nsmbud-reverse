/* sub_6016E33C
 * address: 0x6016E33C   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6016E33C(int a1)
{
  int v2; // r5
  int result; // r0
  int v4; // [sp+4h] [bp-14h]

  v2 = dword_60C8996C;
  v4 = sub_6019112C(dword_60C8996C);
  if ( FIELD_U8(v2, 1384) )
  {
    switch ( v4 )
    {
      case 'D':
        FIELD_F32(a1, 892) = FIELD_F32(a1, 888) / (float)FIELD_S32(a1, 916);
        FIELD_U32(a1, 896) = 1;
        break;
      case 'C':
        FIELD_U32(a1, 884) = 0;
        FIELD_U32(a1, 912) = 10;
        FIELD_U32(a1, 916) = 60;
        FIELD_U32(a1, 928) = 1065353216;
        FIELD_U32(a1, 932) = 1101004800;
        FIELD_U32(a1, 888) = 1101004800;
        FIELD_U32(a1, 900) = dword_60C88B08;
        FIELD_U32(a1, 904) = dword_60C88B0C;
        FIELD_U32(a1, 908) = dword_60C88B10;
        FIELD_U32(a1, 896) = 0;
        FIELD_U32(a1, 924) = 0;
        sub_6019B874(1, 0);
        FIELD_U8(a1, 260) = 1;
        break;
      case 'A':
        ((void (__fastcall *)(int))loc_6016E514)(a1);
        break;
    }
  }
  result = v4 - 62;
  switch ( v4 )
  {
    case '>':
      result = FIELD_U32(a1, 752);
      if ( !result )
        goto LABEL_19;
      break;
    case '?':
      if ( FIELD_F32(a1, 736) == FIELD_F32(a1, 724)
        && FIELD_F32(a1, 740) == FIELD_F32(a1, 728)
        && FIELD_F32(a1, 744) == FIELD_F32(a1, 732) )
      {
        goto LABEL_19;
      }
      break;
    case 'A':
    case 'B':
      result = ((int (__fastcall *)(int))loc_6016E918)(a1);
      if ( result == 1 )
        goto LABEL_19;
      break;
    case 'D':
      if ( FIELD_F32(a1, 888) == 0.0 )
      {
        FIELD_U32(a1, 900) = dword_60C88B08;
        FIELD_U32(a1, 904) = dword_60C88B0C;
        FIELD_U32(a1, 908) = dword_60C88B10;
        FIELD_U32(a1, 896) = 5;
        goto LABEL_19;
      }
      break;
    default:
LABEL_19:
      FIELD_U8(a1, 260) = 1;
      result = 1;
      break;
  }
  return result;
}
