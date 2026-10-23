/* sub_6082BA24
 * address: 0x6082BA24   size: 628   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6082BA24(int a1, _BYTE *a2)
{
  _DWORD *v4; // r8
  int v5; // r9
  int v6; // r5
  int v7; // r7
  int v8; // r6
  int v9; // r0
  _DWORD *v10; // r1
  int v11; // r2
  int v12; // r0
  int v13; // r3
  char v14; // r1
  int v15; // r0
  int v16; // r2
  char v17; // r1
  int v18; // r0
  _DWORD *v19; // r8
  int v20; // t1
  int v21; // r1
  bool v22; // zf
  int result; // r0
  char v24; // r2
  int v25; // r0
  int v26; // r2
  char v27; // r1
  int v28; // r1
  int v29; // r0
  int v30; // r2
  char v31; // r1
  int v32; // r0
  int v33; // r2
  char v34; // r1
  _BYTE *v35; // r0
  int v36; // r0
  _DWORD *v37; // r8
  int v38; // t1
  int v39; // r1
  char v40; // r2

  v4 = *(_DWORD **)(a1 + 40);
  v5 = dword_60CC6D78;
  v6 = FIELD_U8(dword_60CC6D8C, 17);
  v7 = LevelInfo_instance;
  v8 = 0;
  if ( sub_6040E438(LevelInfo_instance) || sub_6040E3D0(v7) || sub_6040E510(v7) || sub_6040E538(v7) )
    return v8;
  if ( (FIELD_U8(v5, 44) & 1) == 0 )
  {
    if ( !**(_BYTE **)(v5 + 140) )
    {
      if ( v6 )
        v9 = 11044;
      else
        v9 = 11043;
      v10 = &v4[v9];
      v11 = v4[v9];
      v12 = 0;
      v13 = v11;
      if ( v11 != -1 )
        v13 = v11 + 1;
      *v10 = v13;
      v14 = FIELD_U8(a1, 48);
      if ( v11 != v13 )
        v12 = 1;
      if ( v12 )
        v14 |= 1u;
      FIELD_U8(a1, 48) = v14;
      switch ( sub_603FD0B4(a2) )
      {
        case 1:
          v15 = v4[11039];
          v16 = v15;
          if ( v15 != -1 )
            v16 = v15 + 1;
          v4[11039] = v16;
          v17 = FIELD_U8(a1, 48);
          if ( v15 != v16 )
            v17 |= 1u;
          goto LABEL_44;
        case 2:
          v25 = v4[11040];
          v26 = v25;
          if ( v25 != -1 )
            v26 = v25 + 1;
          v4[11040] = v26;
          v27 = FIELD_U8(a1, 48);
          if ( v25 != v26 )
            v27 |= 1u;
          FIELD_U8(a1, 48) = v27;
          v28 = 44300;
          goto LABEL_42;
        case 3:
          v29 = v4[11041];
          v30 = v29;
          if ( v29 != -1 )
            v30 = v29 + 1;
          v4[11041] = v30;
          v31 = FIELD_U8(a1, 48);
          if ( v29 != v30 )
            v31 |= 1u;
          FIELD_U8(a1, 48) = v31;
          v28 = 44301;
          goto LABEL_42;
        case 4:
          v32 = v4[11042];
          v33 = v32;
          if ( v32 != -1 )
            v33 = v32 + 1;
          v4[11042] = v33;
          v34 = FIELD_U8(a1, 48);
          if ( v32 != v33 )
            v34 |= 1u;
          FIELD_U8(a1, 48) = v34;
          v28 = 44302;
LABEL_42:
          v35 = (char *)v4 + v28;
          if ( !*((_BYTE *)v4 + v28) )
          {
            v17 = 1;
            *v35 = 1;
LABEL_44:
            FIELD_U8(a1, 48) = v17;
          }
          break;
        default:
          break;
      }
      v8 = 1;
      if ( FIELD_U8(v5, 109032) )
      {
        v38 = v4[11045];
        v37 = v4 + 11045;
        v36 = v38;
        v39 = v38;
        if ( v38 != -1 )
          ++v39;
        *v37 = v39;
        v40 = FIELD_U8(a1, 48);
        if ( v36 != v39 )
          v40 |= 1u;
        FIELD_U8(a1, 48) = v40;
      }
    }
    return v8;
  }
  v20 = v4[11046];
  v19 = v4 + 11046;
  v18 = v20;
  v21 = v20;
  if ( v20 != -1 )
    ++v21;
  *v19 = v21;
  v22 = v18 == v21;
  result = 1;
  v24 = FIELD_U8(a1, 48);
  if ( !v22 )
    v24 |= 1u;
  FIELD_U8(a1, 48) = v24;
  return result;
}
