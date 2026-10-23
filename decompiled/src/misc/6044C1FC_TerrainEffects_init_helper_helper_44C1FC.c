/* TerrainEffects_init_helper_helper_44C1FC
 * address: 0x6044C1FC   size: 668   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall TerrainEffects_init_helper_helper_44C1FC(int a1, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v10; // r7
  int v11; // r2
  int v12; // r0
  int v13; // r1
  __int16 v15; // [sp+14h] [bp-8Ch] BYREF
  char v16; // [sp+16h] [bp-8Ah]
  int v17; // [sp+18h] [bp-88h]
  char v18; // [sp+3Ch] [bp-64h]
  char v19; // [sp+3Dh] [bp-63h]
  char v20; // [sp+3Eh] [bp-62h]
  char v21; // [sp+3Fh] [bp-61h]
  char v22; // [sp+40h] [bp-60h]
  char v23; // [sp+41h] [bp-5Fh]
  __int16 v24; // [sp+6Ch] [bp-34h]

  FIELD_U32(a1, 115368) = a4;
  v10 = (_DWORD *)(a1 + 115368);
  if ( !a4 )
  {
    sub_60450C78(dword_60C9CEF0, a5, a6, 8);
    sub_60450C78(dword_60C9CEF0, 3, -1, 11);
    sub_60450CBC(dword_60C9CEF0, 1, 7, 7, 1, 2, 8);
    sub_60450CBC(dword_60C9CEF0, 1, 7, 7, 1, 2, 11);
    sub_6090B350(&v15);
    v17 |= 1u;
    v22 = 1;
    v23 = 1;
    v18 = 5;
    v19 = 5;
    v20 = 6;
    v21 = 6;
    v15 = 1;
    HIBYTE(v24) = 1;
    sub_60450C98(dword_60C9CEF0, &v15, 8);
    sub_6090B350(&v15);
    v11 = 11;
    v17 &= ~1u;
    v22 = 1;
    v23 = 1;
    v18 = 5;
    v19 = 5;
    v20 = 6;
    v21 = 6;
    v16 = 0;
    v15 = 257;
    v12 = dword_60C9CEF0;
    HIBYTE(v24) = 1;
LABEL_10:
    sub_60450C98(v12, &v15, v11);
    goto LABEL_11;
  }
  if ( a4 != 4 )
  {
    sub_60450C78(dword_60C9CEF0, a5, a6, 8);
    sub_60450CBC(dword_60C9CEF0, 1, 1, 7, 1, 2, 8);
    v13 = 3;
    if ( *v10 == 3 )
      v13 = 4;
    *(_DWORD *)(FIELD_U32(dword_60C9CEF0, 48) + 28) = v13;
    sub_6090B350(&v15);
    v11 = 8;
    v17 |= 1u;
    v19 = 5;
    v21 = 6;
    v15 = 1;
    if ( (*v10 & 0xFFFFFFFE) == 2 )
      v15 = 257;
    v24 = 516;
    v12 = dword_60C9CEF0;
    goto LABEL_10;
  }
  sub_60450C78(dword_60C9CEF0, a5, a6, 9);
  sub_60450CBC(dword_60C9CEF0, 1, 1, 7, 1, 2, 9);
LABEL_11:
  FIELD_U32(a1, 56) = a2;
  FIELD_U32(a1, 60) = a3;
  FIELD_U32(a1, 115364) = 7200;
  *v10 = a4;
  FIELD_U16(a1, 115372) = 0;
  FIELD_U16(a1, 115374) = 0;
  FIELD_U32(a1, 52) = 7200;
  return 1;
}
