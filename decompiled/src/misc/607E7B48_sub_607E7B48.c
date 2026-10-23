/* sub_607E7B48
 * address: 0x607E7B48   size: 1448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607E7B48(_DWORD *a1)
{
  char v1; // r12
  int *v3; // r0
  int v4; // r5
  int v5; // r1
  int v6; // r6
  int v7; // r11
  _DWORD **v8; // r1
  ModelWrapper **v9; // r1
  _BOOL4 v10; // r0
  _DWORD **v11; // r1
  _DWORD **v12; // r1
  int v13; // r1
  void (*v14)(void); // r3
  _DWORD **v15; // r1
  _DWORD **v16; // r1
  _DWORD **v17; // r1
  int v18; // r1
  _DWORD *v19; // r1
  int v20; // r0
  int v21; // r1
  bool v22; // zf
  int v24; // [sp+8h] [bp-60h]
  int *v25; // [sp+Ch] [bp-5Ch]
  int v26; // [sp+14h] [bp-54h] BYREF
  int v27; // [sp+18h] [bp-50h]
  int v28; // [sp+1Ch] [bp-4Ch]
  int v29; // [sp+20h] [bp-48h]
  int v30; // [sp+24h] [bp-44h]
  int v31; // [sp+28h] [bp-40h]
  int v32; // [sp+2Ch] [bp-3Ch]
  int v33; // [sp+30h] [bp-38h]
  int v34; // [sp+34h] [bp-34h]
  int v35; // [sp+38h] [bp-30h]
  int v36; // [sp+3Ch] [bp-2Ch]
  int v37; // [sp+40h] [bp-28h]

  v3 = *(int **)(dword_60CD0B40 + 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 7u )
    v3 += 7;
  v4 = *v3;
  if ( ((unsigned int)&dword_60C81740 & ~(1618901892 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C81740) )
  {
    dword_60C8173C = (int)&off_60BC6E70;
    _cxa_guard_release(&dword_60C81740);
  }
  if ( v4 )
  {
    v5 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v4 + 8))(v4, &dword_60C8173C);
    if ( v5 )
      v5 = v4;
  }
  else
  {
    v5 = 0;
  }
  sub_604431BC(DrawMgr_instance, v5, 2u);
  v6 = a1[854];
  if ( v6 )
  {
    v7 = 0;
    v24 = a1[855];
    v25 = a1 + 431248;
    while ( FIELD_U8(dword_60CC6D8C, 17) )
    {
      if ( (FIELD_U8(dword_60CC6D78, 109048) & 0x7F) != 0 )
      {
        switch ( v7 )
        {
          case 8:
            v26 = 1065353216;
            v27 = 0;
            v28 = 0;
            v30 = 0;
            v31 = 1065353216;
            v32 = 0;
            v34 = 0;
            v35 = 0;
            v36 = 1065353216;
            v29 = 1098907648;
            v33 = 0;
            v37 = 0;
            v15 = (_DWORD **)a1[855];
            if ( a1[854] > 8u )
              v15 += 8;
            (*(void (__fastcall **)(_DWORD, int *))(*(_DWORD *)**v15 + 60))(**v15, &v26);
            v9 = (ModelWrapper **)a1[855];
            if ( a1[854] > 8u )
              v9 += 8;
            goto LABEL_51;
          case 19:
            v26 = 1065353216;
            v27 = 0;
            v28 = 0;
            v30 = 0;
            v31 = 1065353216;
            v32 = 0;
            v34 = 0;
            v35 = 0;
            v36 = 1065353216;
            v29 = 1090519040;
            v33 = 0;
            v37 = 0;
            v16 = (_DWORD **)a1[855];
            if ( a1[854] > 0x13u )
              v16 += 19;
            (*(void (__fastcall **)(_DWORD, int *))(*(_DWORD *)**v16 + 60))(**v16, &v26);
            v9 = (ModelWrapper **)a1[855];
            if ( a1[854] > 0x13u )
              v9 += 19;
            goto LABEL_51;
          case 22:
            v26 = 1065353216;
            v27 = 0;
            v28 = 0;
            v30 = 0;
            v31 = 1065353216;
            v32 = 0;
            v34 = 0;
            v35 = 0;
            v36 = 1065353216;
            v29 = 1111857562;
            v33 = 0x40000000;
            v37 = 0;
            v8 = (_DWORD **)a1[855];
            if ( a1[854] > 0x16u )
              v8 += 22;
            (*(void (__fastcall **)(_DWORD, int *))(*(_DWORD *)**v8 + 60))(**v8, &v26);
            v9 = (ModelWrapper **)a1[855];
            if ( a1[854] > 0x16u )
              v9 += 22;
            goto LABEL_51;
        }
        v10 = v7 == 10;
        if ( v7 == 1 && *v25 >= 20 )
          goto LABEL_47;
      }
      else
      {
        v10 = v7 == 21;
        if ( v7 == 15 )
        {
          v18 = a1[855];
          if ( a1[854] > 0xFu )
            v18 += 60;
          v14 = *(void (**)(void))(***(_DWORD ***)v18 + 112);
LABEL_57:
          v14();
LABEL_58:
          if ( *((_BYTE *)a1 + v7 + 4008) && *((unsigned __int8 *)a1 + v7 + 1729000) == 255 )
            DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(v24 + 4 * v7));
          goto LABEL_61;
        }
        if ( v7 == 26 )
        {
          v11 = (_DWORD **)a1[855];
          if ( a1[854] > 0x1Au )
            v11 += 26;
          (*(void (__fastcall **)(_DWORD, int, _DWORD))(*(_DWORD *)**v11 + 112))(**v11, 34, 0);
          v12 = (_DWORD **)a1[855];
          if ( a1[854] > 0x1Au )
            v12 += 26;
          (*(void (__fastcall **)(_DWORD, int, _DWORD))(*(_DWORD *)**v12 + 112))(**v12, 35, 0);
          v13 = a1[855];
          if ( a1[854] > 0x1Au )
            v13 += 104;
          v14 = *(void (**)(void))(***(_DWORD ***)v13 + 112);
          goto LABEL_57;
        }
      }
      if ( !v10 )
        goto LABEL_58;
LABEL_61:
      if ( v6 == ++v7 )
        goto LABEL_62;
    }
    if ( v7 != 1 || *v25 < 20 )
      goto LABEL_58;
LABEL_47:
    v26 = 1065353216;
    v27 = 0;
    v28 = 0;
    v30 = 0;
    v31 = 1065353216;
    v32 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 1065353216;
    v29 = 1094713344;
    v33 = 0;
    v37 = 0;
    v17 = (_DWORD **)a1[855];
    if ( a1[854] > 1u )
      ++v17;
    (*(void (__fastcall **)(_DWORD, int *))(*(_DWORD *)**v17 + 60))(**v17, &v26);
    v9 = (ModelWrapper **)a1[855];
    if ( a1[854] > 1u )
      ++v9;
LABEL_51:
    ModelWrapper_updateModel(*v9);
    goto LABEL_58;
  }
LABEL_62:
  v19 = (_DWORD *)a1[432295];
  if ( v19
    && (FIELD_U8(dword_60CC6D78, 109048) & 0x7F) == 0
    && FIELD_U8(dword_60CC6D8C, 17)
    && (int)a1[431246] < 2000 )
  {
    DrawMgr_drawModel2(DrawMgr_instance, v19);
  }
  v20 = a1[432296];
  if ( v20 )
  {
    v21 = FIELD_U16(dword_60CC6D78, 109048) & 0x7F;
    if ( v21 == 10 )
    {
      if ( (int)a1[431246] <= 2499 )
        return sub_60443298((int)DrawMgr_instance);
    }
    else
    {
      if ( v21 )
        return sub_60443298((int)DrawMgr_instance);
      v22 = FIELD_U8(dword_60CC6D8C, 16) == 0;
      if ( FIELD_U8(dword_60CC6D8C, 16) )
        v22 = FIELD_U8(dword_60CC6D8C, 17) == 0;
      if ( v22 || (int)a1[431246] < 3200 )
        return sub_60443298((int)DrawMgr_instance);
    }
    sub_60290248(v20);
  }
  return sub_60443298((int)DrawMgr_instance);
}
