/* sub_608AB194
 * address: 0x608AB194   size: 2416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_608AB194(int a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v12; // r6
  int v13; // r0
  _DWORD *v14; // r11
  int v15; // r2
  int v16; // r0
  int v17; // r6
  int ItemLabel_const; // r6
  _BYTE *v19; // r0
  bool v20; // zf
  _BYTE *v21; // r0
  int v22; // r1
  _BYTE *v23; // r0
  int v24; // r7
  int v25; // r0
  char *v26; // r7
  _BYTE *v27; // r5
  int v28; // r0
  _BYTE *v29; // r0
  int v30; // r6
  int v31; // r0
  int v32; // r5
  int ItemId_const; // r8
  int v34; // r0
  bool v35; // zf
  int v36; // r0
  int v37; // r7
  _DWORD *v38; // r10
  int v39; // r0
  _DWORD *v40; // r5
  _DWORD *v41; // r7
  _BYTE *v42; // r0
  _BYTE *v43; // r0
  bool v44; // r0
  char v45; // r0
  _DWORD *v46; // r8
  _DWORD *v47; // r6
  int v48; // r0
  bool v49; // zf
  _BYTE *v51; // r0
  bool v52; // zf
  int v53; // [sp+0h] [bp-6D8h]
  _DWORD *v54; // [sp+10h] [bp-6C8h]
  int v55; // [sp+14h] [bp-6C4h]
  int v56; // [sp+18h] [bp-6C0h]
  int v57; // [sp+1Ch] [bp-6BCh]
  int v58; // [sp+20h] [bp-6B8h]
  _BYTE v59[20]; // [sp+24h] [bp-6B4h] BYREF
  int v60; // [sp+38h] [bp-6A0h]
  int v61; // [sp+3Ch] [bp-69Ch]
  unsigned int v62; // [sp+40h] [bp-698h]
  int v63; // [sp+58h] [bp-680h]
  int v64; // [sp+5Ch] [bp-67Ch]
  _BYTE v65[4]; // [sp+60h] [bp-678h] BYREF
  int itemId; // [sp+64h] [bp-674h]
  int v67; // [sp+6Ch] [bp-66Ch]
  int v68; // [sp+70h] [bp-668h]
  int v69; // [sp+74h] [bp-664h]
  char v70; // [sp+7Fh] [bp-659h]
  int v71[3]; // [sp+80h] [bp-658h] BYREF
  int v72; // [sp+8Ch] [bp-64Ch]
  _BYTE v73[1608]; // [sp+90h] [bp-648h] BYREF

  v12 = a1 + 4;
  sub_608B43EC(a1 + 4, a7);
  v13 = FIELD_U32(a1, 8);
  v14 = *(_DWORD **)(a1 + 20);
  v15 = FIELD_U32(a1, 24);
  v71[0] = FIELD_U32(a1, 4);
  v71[1] = v13;
  v71[2] = (int)v14;
  v72 = v15;
  v16 = sub_608B44A8(v12);
  v17 = 12;
  if ( v16 != 1 )
    return v17;
  if ( *a2 )
    sub_608AC1C0(a2);
  ItemLabel_const = nn__atk__SoundArchive__GetItemLabel_const((int)v14, a3);
  v70 = 0;
  v19 = *(_BYTE **)(a1 + 400);
  if ( !v19 )
    goto LABEL_13;
  v20 = ItemLabel_const == 0;
  if ( ItemLabel_const )
    v20 = v19[4] == 0;
  if ( v20 )
  {
LABEL_13:
    if ( a3 == -1 )
      return 2;
    goto LABEL_17;
  }
  (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)v19 + 12))(v19);
  v21 = *(_BYTE **)(a1 + 400);
  if ( !v21[4] )
  {
    v23 = (_BYTE *)v14[2];
    goto LABEL_16;
  }
  v22 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v21 + 8))(v21, ItemLabel_const);
  v23 = (_BYTE *)v14[2];
  if ( !v22 )
  {
LABEL_16:
    v23[4] = 0;
    *(_BYTE *)(FIELD_U32(a1, 400) + 4) = 0;
    v70 = 1;
LABEL_17:
    v24 = sub_608A9B50((int)v14, a3);
    goto LABEL_18;
  }
  if ( v23[4] )
  {
    v24 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v23 + 20))(v23, ItemLabel_const);
    if ( !a7 )
      goto LABEL_67;
  }
  else
  {
    v24 = 0;
    if ( !a7 )
      goto LABEL_67;
  }
  v42 = (_BYTE *)v14[2];
  if ( v42[4] )
  {
    a3 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v42 + 16))(v42, ItemLabel_const);
    if ( v24 != 3 )
      goto LABEL_68;
LABEL_72:
    v43 = *(_BYTE **)(a1 + 400);
    if ( v43[4] )
    {
LABEL_73:
      v53 = 0;
      v44 = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v43 + 24))(v43) != 0;
LABEL_76:
      v45 = !v44;
      goto LABEL_77;
    }
LABEL_75:
    v44 = 0;
    goto LABEL_76;
  }
  a3 = -1;
LABEL_67:
  if ( v24 == 3 )
    goto LABEL_72;
LABEL_68:
  if ( v24 != 2 )
  {
    if ( v24 != 1 )
      goto LABEL_78;
    v43 = *(_BYTE **)(a1 + 400);
    if ( v43[4] )
      goto LABEL_73;
    goto LABEL_75;
  }
  v45 = 0;
LABEL_77:
  v70 = v45;
LABEL_78:
  if ( (v70 & 1) != 0 )
  {
    *(_BYTE *)(v14[2] + 4) = 0;
    *(_BYTE *)(FIELD_U32(a1, 400) + 4) = 0;
  }
LABEL_18:
  if ( !sub_608A9BC0((int)v14, (int)v65, a3) )
  {
LABEL_112:
    if ( (v70 & 1) != 0 )
    {
      *(_BYTE *)(v14[2] + 4) = 1;
      *(_BYTE *)(FIELD_U32(a1, 400) + 4) = 1;
    }
    v29 = *(_BYTE **)(a1 + 400);
    v17 = 3;
    goto LABEL_115;
  }
  v58 = v24;
  v25 = sub_608B4500(v59, v65);
  sub_608B4550(v25, a8);
  v26 = *(char **)(a1 + 408);
  ((void (__fastcall *)(_BYTE *))loc_608B4F8C)(v73);
  v27 = sub_608065A0();
  sub_60806628((int)v73);
  if ( v27[1401] )
  {
    v28 = sub_608B68B8(v27, v63);
  }
  else
  {
    v28 = v64;
    if ( !v64 )
    {
      if ( !v26 )
        v26 = v27 + 740;
      v28 = (int)v26;
    }
  }
  v57 = v28;
  if ( v69 )
  {
    v17 = ((int (__fastcall *)(_DWORD, _BYTE *, int, int, int))loc_608ABB18)(
            FIELD_U32(a1, 36),
            v65,
            a3,
            FIELD_U32(a1, 36) + 92 * (v61 & 0xFFFFFF),
            v53);
    if ( v17 )
      goto LABEL_27;
  }
  v30 = v60;
  if ( a6 )
    v30 = v60 - 1;
  v56 = 0;
  v31 = 0;
  if ( a4 )
    v31 = sub_608B06B4(a4, a3);
  v32 = 0;
  if ( v31 + v30 > 0 )
    v32 = v31 + v30;
  if ( v31 + v30 > 127 )
    v32 = 127;
  if ( a5 )
  {
    if ( v62 > 3 )
      goto LABEL_56;
    v56 = *(_DWORD *)(a5 + 4 * v62 + 72);
    if ( !v56 )
      goto LABEL_56;
  }
  v54 = a2;
  v55 = v31;
  ItemId_const = v61;
  v34 = FIELD_U32(a1, 400);
  v35 = v34 == 0;
  if ( v34 )
    v35 = FIELD_U8(v34, 4) == 0;
  if ( v35 && (*(int (__fastcall **)(_DWORD *))(*v14 + 24))(v14) == 1 )
  {
    v36 = nn__atk__SoundArchive__GetItemLabel_const((int)v14, itemId);
    ItemId_const = nn__atk__SoundArchive__GetItemId_const(v71[0], v36);
  }
  if ( ItemId_const == -1 )
  {
LABEL_56:
    if ( (v70 & 1) != 0 )
    {
      *(_BYTE *)(v14[2] + 4) = 1;
      *(_BYTE *)(FIELD_U32(a1, 400) + 4) = 1;
    }
    v29 = *(_BYTE **)(a1 + 400);
    v17 = 15;
    goto LABEL_115;
  }
  v37 = FIELD_U32(a1, 36) + 92 * (ItemId_const & 0xFFFFFF);
  if ( !sub_608ACED8(v37, v32) || v56 && !(*(int (__fastcall **)(int, int))(*(_DWORD *)v56 + 8))(v56, v32) )
  {
    if ( (v70 & 1) != 0 )
    {
      *(_BYTE *)(v14[2] + 4) = 1;
      *(_BYTE *)(FIELD_U32(a1, 400) + 4) = 1;
    }
    v29 = *(_BYTE **)(a1 + 400);
    v17 = 1;
    goto LABEL_115;
  }
  if ( v58 == 3 )
  {
    if ( FIELD_U8(a1, 406) )
    {
      v38 = (_DWORD *)sub_608AEA9C(a1 + 232, a3, v30, v55, a4, v57);
      if ( v38 )
      {
        v39 = v37;
        v41 = 0;
        v40 = 0;
        v46 = 0;
        v47 = v38;
        goto LABEL_87;
      }
    }
    else
    {
      v38 = (_DWORD *)sub_608CD380(a1 + 160, a3, v30, v55, a4, v57);
      if ( v38 )
      {
        v39 = v37;
        v41 = 0;
        v40 = 0;
        v46 = v38;
        goto LABEL_86;
      }
    }
    v48 = 3;
LABEL_104:
    sub_608B4DE4(v48);
    if ( (v70 & 1) != 0 )
    {
      *(_BYTE *)(v14[2] + 4) = 1;
      *(_BYTE *)(FIELD_U32(a1, 400) + 4) = 1;
    }
    goto LABEL_106;
  }
  if ( v58 == 2 )
  {
    v38 = (_DWORD *)sub_608C1B7C(a1 + 264, a3, v30, v55, a4, v57);
    if ( v38 )
    {
      v39 = v37;
      v41 = 0;
      v40 = v38;
      goto LABEL_85;
    }
    v48 = 2;
    goto LABEL_104;
  }
  if ( v58 != 1 )
    goto LABEL_112;
  v38 = (_DWORD *)sub_608BA130(a1 + 40, a3, v30, v55, a4, v57);
  if ( !v38 )
  {
    sub_608B4DE4(1);
    if ( (v70 & 1) != 0 )
    {
      *(_BYTE *)(v14[2] + 4) = 1;
      *(_BYTE *)(FIELD_U32(a1, 400) + 4) = 1;
    }
LABEL_106:
    v29 = *(_BYTE **)(a1 + 400);
    v17 = 14;
LABEL_115:
    v49 = v29 == 0;
    if ( v29 )
      v49 = v29[4] == 0;
    if ( !v49 )
      (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)v29 + 16))(v29);
    return v17;
  }
  v39 = v37;
  v40 = 0;
  v41 = v38;
LABEL_85:
  v46 = 0;
LABEL_86:
  v47 = 0;
LABEL_87:
  if ( !sub_608ACC18(v39, v38) )
  {
    (*(void (__fastcall **)(_DWORD *))(*v38 + 16))(v38);
    if ( (v70 & 1) != 0 )
    {
      *(_BYTE *)(v14[2] + 4) = 1;
      *(_BYTE *)(FIELD_U32(a1, 400) + 4) = 1;
    }
    v29 = *(_BYTE **)(a1 + 400);
    v17 = 255;
    goto LABEL_115;
  }
  if ( a8 && (FIELD_U8(a8, 1) & 2) != 0 )
    v38[100] = FIELD_U32(a8, 260);
  sub_608B0398(v38);
  if ( v58 == 3 )
  {
    if ( FIELD_U8(a1, 406) )
    {
      v17 = sub_608AEAFC(a1 + 232, v14, v72, a3, v47, v65, v59);
      if ( v17 )
        goto LABEL_27;
    }
    else
    {
      v17 = sub_608CD3E0(a1 + 160, v14, v72, a3, v46, v65, v59);
      if ( v17 )
      {
        (*(void (__fastcall **)(_DWORD *))(*v46 + 16))(v46);
        goto LABEL_27;
      }
    }
  }
  else if ( v58 == 2 )
  {
    v17 = sub_608C1BDC(a1 + 264, v14, v72, a3, v40, v65, v59);
    if ( v17 )
    {
      (*(void (__fastcall **)(_DWORD *))(*v40 + 16))(v40);
      goto LABEL_27;
    }
  }
  else
  {
    v17 = sub_608BA190(a1 + 40, v71, a3, v41, v65, v59);
    if ( v17 )
    {
      (*(void (__fastcall **)(_DWORD *))(*v41 + 16))(v41);
LABEL_27:
      if ( (v70 & 1) != 0 )
      {
        *(_BYTE *)(v14[2] + 4) = 1;
        *(_BYTE *)(FIELD_U32(a1, 400) + 4) = 1;
      }
      v29 = *(_BYTE **)(a1 + 400);
      goto LABEL_115;
    }
  }
  if ( (v70 & 1) != 0 )
  {
    *(_BYTE *)(v14[2] + 4) = 1;
    *(_BYTE *)(FIELD_U32(a1, 400) + 4) = 1;
  }
  v51 = *(_BYTE **)(a1 + 400);
  v52 = v51 == 0;
  if ( v51 )
    v52 = v51[4] == 0;
  if ( !v52 )
    (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)v51 + 16))(v51);
  sub_608B0318(v38);
  sub_608B05BC(v38, v67);
  sub_608B0610(v38, v68);
  if ( v56 && !sub_608B08B8(v56, v38) )
  {
    (*(void (__fastcall **)(_DWORD *))(*v38 + 16))(v38);
    return 255;
  }
  else
  {
    if ( a5 )
      sub_608B02F0(v38, a5);
    if ( a6 == 1 )
      sub_608AF2F4(v38, v60);
    sub_608B06E8(v38, v14);
    nn__os__GetSystemTick((nn__os *)v73);
    sub_608B06DC(v38, v73);
    sub_608AC23C(v54, v38);
    return 0;
  }
}
