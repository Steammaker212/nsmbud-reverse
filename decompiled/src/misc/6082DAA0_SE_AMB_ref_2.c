/* SE_AMB_ref_2
 * address: 0x6082DAA0   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_AMB_ref_2(int a1)
{
  int result; // r0
  float v3; // r2

  result = 0;
  if ( (FIELD_U8(dword_60CBFA90, 60) & 1) == 0 )
  {
    switch ( FIELD_U32(a1, 20) )
    {
      case 0:
        LODWORD(v3) = (int)(float)(FIELD_F32(AreaTask_intance, 1816) - FIELD_F32(dword_60CC6484, 128));
        (*(void (__fastcall **)(int, const char *, float, _DWORD, float))(*(_DWORD *)dword_60C7F538 + 48))(
          dword_60C7F538,
          "SE_AMB_MAGMA",
          COERCE_FLOAT(LODWORD(v3)),
          0,
          v3);
        goto LABEL_10;
      case 1:
        (*(void (__fastcall **)(int, const char *, _DWORD))(*(_DWORD *)dword_60C7F538 + 44))(
          dword_60C7F538,
          "SE_AMB_JUNGLE",
          0);
        goto LABEL_10;
      case 2:
        (*(void (__fastcall **)(int, const char *, _DWORD))(*(_DWORD *)dword_60C7F538 + 44))(
          dword_60C7F538,
          "SE_AMB_THUNDER_CLOUD",
          0);
        goto LABEL_10;
      case 3:
        (*(void (__fastcall **)(int, const char *, _DWORD))(*(_DWORD *)dword_60C7F538 + 44))(
          dword_60C7F538,
          "SE_AMB_SEASIDE",
          0);
        goto LABEL_10;
      case 4:
        (*(void (__fastcall **)(int, const char *, _DWORD))(*(_DWORD *)dword_60C7F538 + 44))(
          dword_60C7F538,
          "SE_AMB_SEWER",
          0);
        goto LABEL_10;
      case 5:
        (*(void (__fastcall **)(int, const char *, _DWORD))(*(_DWORD *)dword_60C7F538 + 44))(
          dword_60C7F538,
          "SE_AMB_RP_SHIP_WIND",
          0);
        goto LABEL_10;
      case 6:
        (*(void (__fastcall **)(int, const char *, _DWORD))(*(_DWORD *)dword_60C7F538 + 44))(
          dword_60C7F538,
          "SE_AMB_RP_W7_SHIP_WIND",
          0);
LABEL_10:
        result = 1;
        break;
      default:
        return result;
    }
  }
  return result;
}
