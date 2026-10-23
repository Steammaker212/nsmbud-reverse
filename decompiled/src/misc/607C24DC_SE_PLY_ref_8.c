/* SE_PLY_ref_8
 * address: 0x607C24DC   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_ref_8(int a1)
{
  int v2; // r0
  int result; // r0

  sub_607957D4(a1, 2);
  FIELD_U32(a1, 1212) |= 0x2000u;
  if ( FIELD_U8(dword_60CC6D8C, 17) )
    FIELD_U32(a1, 1224) |= 0x20u;
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 104) = 0;
  FIELD_U32(a1, 92) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 96) = -1065353216;
  FIELD_U32(a1, 12272) = 0;
  v2 = FIELD_U8(a1, 87) << 31;
  FIELD_U32(a1, 12264) = v2;
  FIELD_U32(a1, 160) = v2;
  FIELD_U16(a1, 6690) |= 1u;
  result = FIELD_U32(a1, 9936);
  switch ( result )
  {
    case 0:
    case 2:
      sub_60773630(a1, 28, 0);
      result = FIELD_U32(a1, 6696);
      switch ( result )
      {
        case 3:
          PlayerBase_dispatchVirtual3(a1 + 11356, 54, 0.0);
          sub_607734E8((unsigned __int8 *)a1, (int)"SE_PLY_LAND_FENCE", 0, 0);
          goto LABEL_14;
        case 2:
          PlayerBase_dispatchVirtual3(a1 + 11356, 54, 0.0);
          goto LABEL_14;
        case 1:
          sub_607734E8((unsigned __int8 *)a1, (int)"SE_PLY_CATCH_IVY", 0, 0);
          if ( (FIELD_U8(a1, 6900) & 1) != 0 || sub_6075EDF8(a1) )
          {
            PlayerBase_dispatchVirtual3(a1 + 11356, 60, 0.0);
            result = 1;
          }
          else
          {
            PlayerBase_dispatchVirtual3(a1 + 11356, 59, 0.0);
            result = 0;
          }
          FIELD_U32(a1, 9940) = 0;
          FIELD_U32(a1, 9948) = result;
          break;
      }
      break;
    case 1:
      PlayerBase_dispatchVirtual3(a1 + 11356, 60, 0.0);
      FIELD_U32(a1, 9940) = 0;
      result = 9948;
      goto LABEL_15;
    case 3:
      sub_60794954(a1 + 11356, 54, 0.0, 0.0);
LABEL_14:
      result = 9940;
LABEL_15:
      *(_DWORD *)(a1 + result) = 1;
      break;
    default:
      return result;
  }
  return result;
}
