/* KoopalingBase__vf624
 * address: 0x600B6A98   size: 344   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x6009FF18 : Iggy
void __fastcall KoopalingBase__vf624(int a1)
{
  float v2; // s2
  float v3; // s18
  float v4; // s16
  float v5; // s2
  float *v6; // r0
  float v7; // s0

  FIELD_U32(a1, 7176) = 2;
  v2 = FIELD_F32(dword_60CC6484, 116);
  v3 = v2 + FIELD_F32(a1, 7492);
  v4 = v2 + FIELD_F32(a1, 7488);
  FIELD_U32(a1, 80) = FIELD_F32(a1, 108) >= (float)((float)(v4 + v3) * 0.5);
  FIELD_U32(a1, 6148) &= ~0x200u;
  FIELD_U32(a1, 7752) = FIELD_U32(a1, 7756);
  FIELD_U32(a1, 104) = 1050253722;
  FIELD_F32(a1, 120) = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 1128))(a1);
  v5 = FIELD_F32(a1, 108);
  if ( (float)(v5 + -32.0) < v3 )
  {
    v6 = (float *)(a1 + 7748);
    v7 = v3 + 32.0;
LABEL_5:
    *v6 = v7;
    FIELD_F32(a1, 132) = (*(float (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 1128))(
                             a1,
                             FIELD_U8(a1, 80));
    ++FIELD_U32(a1, 7752);
    return;
  }
  v6 = (float *)(a1 + 7748);
  if ( (float)(v5 + 32.0) > v4 )
  {
    v7 = v4 + -32.0;
    goto LABEL_5;
  }
  *v6 = v5;
  FIELD_F32(a1, 132) = (*(float (__fastcall **)(int, int))(*(_DWORD *)a1 + 1128))(
                           a1,
                           (unsigned __int8)FIELD_U32(a1, 80) ^ 1);
}
