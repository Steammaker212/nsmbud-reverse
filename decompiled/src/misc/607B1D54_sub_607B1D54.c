/* sub_607B1D54
 * address: 0x607B1D54   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607B1D54(int a1)
{
  _DWORD *result; // r0
  __int64 v3; // r0
  int *v4; // r5
  int v5; // r0

  if ( sub_607C1600(a1) == 1 )
    return sub_6079EA38((_DWORD *)a1);
  HIDWORD(v3) = FIELD_U32(a1, 12880);
  LODWORD(v3) = 0;
  FIELD_U64(a1, 12880) = v3;
  if ( (FIELD_U8(a1, 6905) & 8) != 0 )
  {
    FIELD_U32(a1, 12880) = 1;
    FIELD_U8(a1, 12892) = 0;
    if ( FIELD_F32(a1, 12888) > FIELD_F32(a1, 112) )
      FIELD_U8(a1, 12892) = 1;
  }
  FIELD_U32(a1, 1224) &= ~0x40u;
  FIELD_U32(a1, 1208) &= ~0x2000u;
  FIELD_U32(a1, 1212) &= ~0x20000u;
  FIELD_U32(a1, 92) = 0;
  FIELD_U32(a1, 104) = 0;
  FIELD_U32(a1, 100) = *(_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1100))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1104))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1092))(a1);
  v4 = (int *)(a1 + 9940);
  if ( FIELD_U32(a1, 9940) )
  {
    (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 1084))(a1, 3200.0);
    switch ( *v4 )
    {
      case 0:
        goto LABEL_8;
      case 1:
        sub_607B21D4(a1);
        break;
      case 2:
        FIELD_U32(a1, 1212) |= 0x20000u;
        sub_60793DA0(FIELD_U32(a1, 11360), 3.0);
        if ( sub_60793184(FIELD_U32(a1, 11360)) <= 9.0 )
          break;
        v5 = 3;
LABEL_16:
        *v4 = v5;
        break;
      case 3:
        ((void (__fastcall *)(int))loc_607B22AC)(a1);
        break;
      case 4:
        ((void (__fastcall *)(int))loc_607B2660)(a1);
        break;
      case 5:
        ((void (__fastcall *)(int))loc_607B2824)(a1);
        break;
      case 6:
        sub_6079EA38((_DWORD *)a1);
        FIELD_U32(a1, 88) = 0;
        PlayerBase_dispatchVirtual3(a1 + 11356, 65, 0.0);
        sub_60773630(a1, 33, 0);
        v5 = 5;
        goto LABEL_16;
      default:
        break;
    }
  }
  else
  {
LABEL_8:
    ((void (__fastcall *)(int))loc_607B1F60)(a1);
  }
  result = *(_DWORD **)(a1 + 112);
  FIELD_U32(a1, 12888) = result;
  return result;
}
