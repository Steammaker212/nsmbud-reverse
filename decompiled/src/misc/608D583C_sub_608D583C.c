/* sub_608D583C
 * address: 0x608D583C   size: 1484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608D583C(int *a1, int a2, int a3)
{
  unsigned __int8 *v6; // r1
  unsigned __int8 **v7; // r6
  unsigned __int8 *v8; // r2
  unsigned __int8 *v9; // r0
  int v10; // r7
  int v11; // r8
  int v12; // r12
  unsigned __int8 *v13; // r3
  int v14; // r5
  int v15; // r0
  unsigned __int8 *v16; // r1
  int v17; // r11
  int v18; // r5
  _BOOL4 v19; // r6
  bool v20; // zf
  int v21; // r2
  int v22; // r0
  int v23; // r2
  unsigned __int8 *v24; // r11
  unsigned __int8 v25; // r10
  int v26; // r0
  int *v27; // r2
  unsigned int v28; // r3
  void (__fastcall *v29)(int *, int, int, unsigned int, int); // r6
  __int16 v30; // r0
  int *v31; // r0
  int v32; // r1
  int v33; // r2
  int v34; // r1
  int v36; // r0
  int v37; // r7
  unsigned int v38; // r5
  int v39; // r3
  unsigned __int8 *v40; // r7
  unsigned __int8 *v41; // r0
  int v42; // r2
  int v43; // r1
  int v44; // r3
  unsigned __int8 *v45; // r2
  unsigned __int8 *v46; // r3
  int v47; // r5
  int v48; // r1
  unsigned __int8 *v49; // r2
  unsigned __int8 *v50; // r3
  int v51; // r5
  int v52; // r1
  int v53; // r5
  __int16 v54; // r0
  unsigned __int16 v55; // r0
  int v56; // [sp+0h] [bp-30h]
  int v57; // [sp+0h] [bp-30h]

  v7 = (unsigned __int8 **)(a2 + 104);
  v6 = *(unsigned __int8 **)(a2 + 104);
  v8 = v7[68];
  v9 = v6 + 1;
  *v7 = v6 + 1;
  v10 = *v6;
  if ( v10 == 162 )
  {
    v9 = v6 + 2;
    FIELD_U32(a2, 104) = v6 + 2;
    v11 = FIELD_U8(a2, 108);
    v10 = v6[1];
    if ( FIELD_U8(a2, 108) )
      v11 = 1;
  }
  else
  {
    v11 = 1;
  }
  v12 = 0;
  if ( (unsigned int)(v10 - 163) > 2 )
  {
    v13 = v9;
    v14 = 0;
    if ( v10 == 161 )
    {
LABEL_12:
      v15 = 5;
      goto LABEL_13;
    }
  }
  else
  {
    v13 = v9 + 1;
    *v7 = v9 + 1;
    v14 = dword_60B3A194[v10 - 163];
    v10 = *v9;
    if ( v10 == 161 )
      goto LABEL_12;
  }
  if ( v10 != 160 )
  {
    v16 = v13;
    v15 = 0;
    if ( (v10 & 0x80) != 0 )
      goto LABEL_34;
LABEL_16:
    FIELD_U32(a2, 104) = v16 + 1;
    if ( !v12 )
      v15 = 3;
    v17 = *v16;
    v18 = sub_608D5E0C(a1, v7, v8, a2, v15);
    v19 = 0;
    if ( v11 == 1 )
    {
      v20 = FIELD_U8(a2, 194) == 0;
      if ( !FIELD_U8(a2, 194) )
        v20 = a3 == 1;
      if ( v20 )
      {
        v21 = v18;
        if ( v18 <= 0 )
          v21 = -1;
        v22 = FIELD_S8(a2, 316) + v10;
        v56 = v21;
        v23 = v22;
        if ( v22 <= 0 )
          v23 = 0;
        if ( v22 > 127 )
          v23 = 127;
        (*(void (__fastcall **)(int *, int, int, int, int, _DWORD))(*a1 + 12))(
          a1,
          a2,
          v23,
          v17,
          v56,
          FIELD_U8(a2, 110));
      }
      if ( FIELD_U8(a2, 109) )
      {
        FIELD_U32(a2, 196) = v18;
        if ( !v18 )
          FIELD_U8(a2, 200) = 1;
      }
    }
    return v19;
  }
  v15 = 4;
LABEL_13:
  v16 = v13 + 1;
  v12 = 1;
  *v7 = v13 + 1;
  v10 = *v13;
  if ( (v10 & 0x80) == 0 )
    goto LABEL_16;
LABEL_34:
  switch ( ((v10 & 0xF0u) - 128) >> 4 )
  {
    case 0u:
      switch ( v10 )
      {
        case 128:
          if ( !v12 )
            v15 = 3;
          v36 = sub_608D5E0C(a1, v7, v8, a2, v15);
          if ( v11 == 1 )
            FIELD_U32(a2, 196) = v36;
          break;
        case 129:
          if ( !v12 )
            v15 = 3;
          v44 = sub_608D5E0C(a1, v7, v8, a2, v15);
          if ( v11 == 1 )
            (*(void (__fastcall **)(int *, int, int, int, _DWORD))(*a1 + 8))(a1, a2, 129, v44, 0);
          break;
        case 136:
          *v7 = v16 + 1;
          v40 = v16 + 4;
          v39 = *v16;
          *v7 = v16 + 2;
          v41 = v16 + 3;
          v42 = v16[1];
          *v7 = v16 + 3;
          v43 = v16[2];
          *v7 = v40;
          if ( v11 == 1 )
            (*(void (__fastcall **)(int *, int, int, int, int))(*a1 + 8))(
              a1,
              a2,
              136,
              v39,
              v42 | (v43 << 8) | (*v41 << 16));
          break;
        case 137:
          v45 = v16 + 2;
          *v7 = v16 + 1;
          v46 = v16 + 3;
          v47 = *v16;
          *v7 = v16 + 2;
          v48 = v16[1];
          *v7 = v46;
          if ( v11 == 1 )
            (*(void (__fastcall **)(int *, int, int, int, _DWORD))(*a1 + 8))(
              a1,
              a2,
              137,
              v47 | (v48 << 8) | (*v45 << 16),
              0);
          break;
        case 138:
          v49 = v16 + 2;
          *v7 = v16 + 1;
          v50 = v16 + 3;
          v51 = *v16;
          *v7 = v16 + 2;
          v52 = v16[1];
          *v7 = v50;
          if ( v11 == 1 )
            (*(void (__fastcall **)(int *, int, int, int, _DWORD))(*a1 + 8))(
              a1,
              a2,
              138,
              v51 | (v52 << 8) | (*v49 << 16),
              0);
          break;
        default:
          return 0;
      }
      return 0;
    case 1u:
      goto LABEL_53;
    case 3u:
    case 4u:
    case 5u:
      v24 = v8;
      if ( !v12 )
        v15 = 1;
      v25 = sub_608D5E0C(a1, v7, v8, a2, v15);
      if ( v14 )
      {
        v26 = sub_608D5E0C(a1, v7, v24, a2, v14);
        if ( v11 != 1 )
          return 0;
      }
      else
      {
        v26 = 0;
        if ( v11 != 1 )
          return 0;
      }
      v27 = a1;
      v28 = v25;
      v29 = *(void (__fastcall **)(int *, int, int, unsigned int, int))(*a1 + 8);
      v57 = v26;
      if ( (unsigned int)(v10 - 195) < 2 )
        v28 = (char)v25;
LABEL_48:
      v31 = v27;
      v32 = a2;
      v33 = v10;
      goto LABEL_57;
    case 6u:
      if ( !v12 )
        v15 = 2;
      v30 = sub_608D5E0C(a1, v7, v8, a2, v15);
      if ( v11 != 1 )
        return 0;
      v27 = a1;
      v28 = v30;
      v29 = *(void (__fastcall **)(int *, int, int, unsigned int, int))(*a1 + 8);
      v57 = 0;
      goto LABEL_48;
    case 7u:
      if ( v10 == 240 )
      {
        *v7 = v16 + 1;
        v37 = *v16;
        v38 = ((v37 & 0xF0u) - 128) >> 4;
        if ( v38 < 2 )
        {
          FIELD_U32(a2, 104) = v16 + 2;
          if ( !v12 )
            v15 = 2;
          v53 = v16[1];
          v54 = sub_608D5E0C(a1, v7, v8, a2, v15);
          if ( v11 == 1 )
            (*(void (__fastcall **)(int *, int, int, int, _DWORD))(*a1 + 8))(a1, a2, v37 | 0xF000, v53, v54);
          return 0;
        }
        if ( v38 - 2 >= 2 )
        {
          if ( v38 != 6 )
            return 0;
          if ( !v12 )
            v15 = 2;
          v55 = sub_608D5E0C(a1, v7, v8, a2, v15);
          if ( v11 != 1 )
            return 0;
          v28 = v55;
          v33 = v37 | 0xF000;
          v34 = *a1;
          v31 = a1;
LABEL_56:
          v29 = *(void (__fastcall **)(int *, int, int, unsigned int, int))(v34 + 8);
          v57 = 0;
          v32 = a2;
LABEL_57:
          v29(v31, v32, v33, v28, v57);
          return 0;
        }
        *v7 = v16 + 2;
        if ( v11 != 1 )
          return 0;
        v31 = a1;
        v28 = v16[1];
        v33 = v37 | 0xF000;
LABEL_55:
        v34 = *v31;
        goto LABEL_56;
      }
      if ( v10 != 255 )
      {
        if ( v10 == 254 )
        {
          *v7 = v16 + 2;
          return 0;
        }
LABEL_53:
        if ( v11 != 1 )
          return 0;
        v31 = a1;
        v33 = v10;
        v28 = 0;
        goto LABEL_55;
      }
      v19 = v11 != 0;
      break;
    default:
      return 0;
  }
  return v19;
}
