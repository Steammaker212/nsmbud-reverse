/* sub_608CD3E0
 * address: 0x608CD3E0   size: 844   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CD3E0(int a1, int a2, int a3, int a4, int a5, int a6, _DWORD *a7)
{
  int v10; // r1
  int result; // r0
  int v12; // r10
  int ItemLabel_const; // r5
  _BYTE *v14; // r0
  int v15; // r7
  _BYTE *v16; // r0
  int v17; // r0
  bool v18; // zf
  int v19; // r8
  int *v20; // r0
  int v21; // r12
  int v22; // r4
  int v23; // r0
  int v24; // r2
  int v25; // r11
  _DWORD *v26; // r5
  bool v27; // r11
  int v28; // r0
  int v29; // r1
  int v30; // r4
  int v31; // r0
  char v32; // r0
  int v33; // [sp+4h] [bp-74h]
  int v34; // [sp+8h] [bp-70h]
  _DWORD v35[4]; // [sp+Ch] [bp-6Ch] BYREF
  int v36[7]; // [sp+1Ch] [bp-5Ch] BYREF
  bool v37; // [sp+38h] [bp-40h]
  int v38; // [sp+3Ch] [bp-3Ch]
  int v39; // [sp+40h] [bp-38h] BYREF
  int v40; // [sp+44h] [bp-34h]
  int v41[2]; // [sp+48h] [bp-30h] BYREF
  __int16 v42; // [sp+50h] [bp-28h]

  v41[1] = 0;
  v42 = 0;
  v10 = sub_608A9D48(a2, a4, (int)v41);
  result = 3;
  if ( v10 != 1 )
    return result;
  v12 = a7[12];
  v34 = *(_DWORD *)(FIELD_U32(a5, 16) + 40);
  v39 = -1;
  v40 = 0;
  if ( FIELD_U32(a1, 68) )
  {
    ItemLabel_const = nn__atk__SoundArchive__GetItemLabel_const(a2, FIELD_U32(a5, 220));
    if ( ItemLabel_const )
    {
      v14 = *(_BYTE **)(a1 + 68);
      if ( v14[4] )
      {
        v15 = (*(int (__fastcall **)(_BYTE *, int, void *, const char *, _DWORD))(*(_DWORD *)v14 + 24))(
                v14,
                ItemLabel_const,
                &unk_60B33D40,
                "bxwsd",
                0);
        v16 = *(_BYTE **)(a1 + 68);
        if ( v16[4] )
        {
          v17 = (*(int (__fastcall **)(_BYTE *, int, void *, const char *, _DWORD))(*(_DWORD *)v16 + 24))(
                  v16,
                  ItemLabel_const,
                  &unk_60B33D40,
                  "bxwar",
                  0);
          v18 = v15 == 0;
          if ( v15 )
            v18 = v17 == 0;
          if ( !v18 )
          {
            v19 = 0;
            v20 = sub_608B4894(v36, v17, 0);
            v21 = sub_608B4A8C((int)v20, v41[0]);
            if ( v21 )
            {
              v22 = 127;
              v39 = FIELD_U32(a5, 220);
              v40 = v15;
LABEL_21:
              v26 = a7;
              v27 = 0;
              v24 = 0;
              goto LABEL_30;
            }
          }
        }
      }
    }
  }
  v15 = sub_608AC060(a3);
  v39 = FIELD_U32(a5, 220);
  v40 = v15;
  if ( !v15 )
  {
    if ( !v34 )
      return 8;
    v15 = 0;
    v22 = 127;
    v19 = 1;
    v21 = 0;
    goto LABEL_21;
  }
  if ( !v12 )
  {
    v22 = 127;
    v25 = 0;
    v33 = 0;
LABEL_24:
    v21 = sub_608C6E60(v15, v41[0], a2, (_DWORD *)(a3 + 12));
    v27 = v25 != 0;
    if ( v21 )
    {
      v26 = a7;
      v19 = 0;
    }
    else
    {
      v26 = a7;
      if ( !v34 )
        return 9;
      v19 = 1;
      v21 = 0;
    }
    v24 = v33;
    goto LABEL_30;
  }
  v23 = FIELD_U32(v12, 12);
  v21 = *(_DWORD *)v12;
  v24 = FIELD_U32(v12, 8);
  v25 = FIELD_U8(v12, 16);
  v22 = 0;
  v19 = 0;
  if ( v23 > 0 )
    v22 = FIELD_U32(v12, 12);
  if ( v23 > 127 )
    v22 = 127;
  if ( !v21 )
  {
    v33 = FIELD_U32(v12, 8);
    goto LABEL_24;
  }
  v26 = a7;
  v27 = v25 != 0;
LABEL_30:
  v28 = v26[1];
  if ( *v26 )
  {
    v29 = 0;
    if ( *v26 != 2 )
      v28 = 0;
  }
  else
  {
    v29 = 1;
  }
  v36[0] = v41[0];
  v36[1] = v29;
  v36[2] = v28;
  v36[3] = v26[2];
  v36[4] = v26[3];
  v36[5] = v24;
  v36[6] = v22;
  v37 = v27;
  v38 = v26[4];
  if ( v19 == 1 )
  {
    v30 = a5;
    v31 = FIELD_U32(a5, 16);
    v35[0] = a2;
    v35[1] = a3;
    v35[2] = &v39;
    v35[3] = v31;
    sub_608CB8B0(a5, v35, v36);
  }
  else
  {
    v30 = a5;
    v32 = 0;
    if ( v12 )
    {
      if ( *(_DWORD *)v12 )
        v32 = FIELD_U8(v12, 4);
    }
    sub_608CB7F8(a5, v15, v21, v36, v32);
  }
  sub_608CB940(v30, v42, SHIBYTE(v42));
  return 0;
}
