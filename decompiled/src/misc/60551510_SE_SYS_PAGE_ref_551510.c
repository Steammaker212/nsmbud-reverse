/* SE_SYS_PAGE_ref_551510
 * address: 0x60551510   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_PAGE_ref_551510(_DWORD *a1)
{
  int *v2; // r8
  int *v3; // r2
  int v4; // r0
  _DWORD *v5; // r9
  int v6; // r0
  _DWORD *v7; // r5
  int v8; // r0
  _DWORD *v9; // r7
  int v10; // r1
  _DWORD *v11; // r0
  int v12; // r2
  int v13; // r3
  int v14; // r0
  char v15; // r1
  char v16; // r2
  int v17; // r0
  char v18; // r1
  char v19; // r2
  int v20; // r0
  char v21; // r1
  char v22; // r2

  v2 = a1 + 17558;
  a1[17559] = a1[17558];
  if ( a1[6888] == 1 )
    v3 = &dword_60CAD018;
  else
    v3 = &dword_60CAD010;
  sub_60473DE4(a1 + 11, 1u, v3, 0);
  v5 = a1 + 17555;
  v4 = a1[17555];
  if ( v4 )
  {
    sub_60555628(v4, a1[4453]);
    *v5 = 0;
  }
  v7 = a1 + 17556;
  v6 = a1[17556];
  if ( v6 )
  {
    sub_60555628(v6, a1[4454]);
    *v7 = 0;
  }
  v9 = a1 + 17557;
  v8 = a1[17557];
  if ( v8 )
  {
    sub_60555628(v8, a1[4455]);
    *v9 = 0;
  }
  v10 = *v2;
  if ( a1[6888] == 1 )
  {
    --v10;
    v11 = a1;
    v12 = 0;
    v13 = 1;
    *v2 = v10;
  }
  else
  {
    v12 = 1;
    v13 = 2;
    *v2 = v10 + 1;
    v11 = a1;
  }
  sub_60553CCC(v11, v10, v12, v13);
  v14 = a1[4453];
  v15 = FIELD_U8(v14, 64);
  v16 = v15 | 1;
  if ( !*v5 )
    v16 = v15 & 0xFE;
  FIELD_U8(v14, 64) = v16;
  v17 = a1[4454];
  v18 = FIELD_U8(v17, 64);
  v19 = v18 | 1;
  if ( !*v7 )
    v19 = v18 & 0xFE;
  FIELD_U8(v17, 64) = v19;
  v20 = a1[4455];
  v21 = FIELD_U8(v20, 64);
  v22 = v21 | 1;
  if ( !*v9 )
    v22 = v21 & 0xFE;
  FIELD_U8(v20, 64) = v22;
  return sub_60807EF0(SoundSystem_instance, "SE_SYS_PAGE", 0, 1);
}
