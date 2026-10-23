/* sub_60952194
 * address: 0x60952194   size: 1092   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60952194(int a1, _DWORD *a2, _DWORD *a3, int a4)
{
  signed int v6; // r8
  unsigned __int64 *v7; // r0
  signed int v8; // r11
  int v9; // r4
  bool v10; // cc
  char *v11; // r5
  char *v12; // r1
  char *v13; // r5
  signed int v14; // r4
  int v15; // r0
  void *v16; // r4
  const void *v17; // r1
  int v18; // r5
  signed int v19; // r0
  const char *v20; // r1
  _DWORD v23[2]; // [sp+1Ch] [bp-284h] BYREF
  _DWORD v24[2]; // [sp+24h] [bp-27Ch] BYREF
  _DWORD v25[2]; // [sp+2Ch] [bp-274h] BYREF
  _DWORD v26[2]; // [sp+34h] [bp-26Ch] BYREF
  int (**v27)(); // [sp+3Ch] [bp-264h] BYREF
  char *v28; // [sp+40h] [bp-260h]
  int v29; // [sp+44h] [bp-25Ch]
  int v30; // [sp+48h] [bp-258h] BYREF
  _DWORD v31[67]; // [sp+148h] [bp-158h] BYREF
  _DWORD v32[7]; // [sp+254h] [bp-4Ch] BYREF
  _QWORD v33[6]; // [sp+270h] [bp-30h] BYREF

  v6 = 0;
  v7 = (unsigned __int64 *)sub_60910E84(v33, (int)a2, 0, 0);
  sub_60911208(v7);
  sub_60910C8C(
    v32,
    &dword_60CCFB30,
    &dword_60CCFB34,
    &dword_60CCFB38,
    &dword_60CCFB3C,
    &dword_60CCFB40,
    &dword_60CCFB44);
  sub_60910F70(v33, v32);
  sub_6017D5C0(v31, "_%04d", v32[0]);
  v8 = sub_6043C4B4(a3, v31);
  if ( v8 < 1 )
    goto LABEL_38;
  (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
  v9 = a3[1];
  while ( *(_BYTE *)(v9 + v6) )
  {
    if ( !*(_BYTE *)(v9 + v6 + 1) )
    {
      ++v6;
      break;
    }
    if ( !*(_BYTE *)(v9 + v6 + 2) )
    {
      v6 += 2;
      break;
    }
    v10 = v6 + 2 <= 0x7FFFF;
    v6 += 3;
    if ( !v10 )
    {
      v6 = 0;
      break;
    }
  }
  v11 = off_60C5CB34;
  v28 = (char *)&v30;
  v27 = &BufferedSafeStringBase_char_vtable_probably;
  v29 = 256;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v27);
  v12 = v11;
  if ( v6 >= v8 )
    v12 = (char *)(v9 + v8);
  v27 = &off_60BD94D4;
  v13 = v28;
  if ( v28 != v12 )
  {
    v14 = 0;
    while ( v12[v14] )
    {
      if ( !v12[v14 + 1] )
      {
        ++v14;
        break;
      }
      if ( !v12[v14 + 2] )
      {
        v14 += 2;
        break;
      }
      v10 = v14 + 2 <= 0x7FFFF;
      v14 += 3;
      if ( !v10 )
      {
        v14 = 0;
        break;
      }
    }
    if ( v14 >= v29 )
      v14 = v29 - 1;
    qmemcpy(v28, v12, v14);
    v13[v14] = 0;
  }
  v27 = &off_60BD94BC;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v27);
  v15 = 0;
  while ( v28[v15] )
  {
    if ( !v28[v15 + 1] )
    {
      if ( v15 != 20 )
        goto LABEL_38;
      goto LABEL_34;
    }
    if ( !v28[v15 + 2] )
    {
      v15 += 2;
      break;
    }
    v10 = v15 + 2 <= 0x7FFFF;
    v15 += 3;
    if ( !v10 )
      goto LABEL_38;
  }
  if ( v15 != 21 )
    goto LABEL_38;
LABEL_34:
  v26[0] = &sead__SafeStringBase__vtable;
  v26[1] = "tc.tga";
  if ( sub_6018506C(&v27, v26) == -1 )
  {
    v25[0] = &sead__SafeStringBase__vtable;
    v25[1] = "dc.tga";
    if ( sub_6018506C(&v27, v25) == -1 )
    {
      v24[0] = &sead__SafeStringBase__vtable;
      v24[1] = "tp.tga";
      if ( sub_6018506C(&v27, v24) == -1 )
      {
        v23[0] = &sead__SafeStringBase__vtable;
        v23[1] = "dp.tga";
        if ( sub_6018506C(&v27, v23) == -1 )
        {
LABEL_38:
          v27 = &sead__SafeStringBase__vtable;
          v28 = ".tga";
          v8 = sub_6043C4B4(a3, &v27);
        }
      }
    }
  }
  if ( v8 < 1 )
  {
    v31[0] = &sead__SafeStringBase__vtable;
    v31[1] = "capture";
    (*(void (__fastcall **)(_DWORD *, _DWORD *))(*a2 + 8))(a2, v31);
    v18 = a4;
  }
  else
  {
    v16 = (void *)a2[1];
    (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
    v17 = (const void *)a3[1];
    v18 = a4;
    if ( v16 != v17 )
    {
      v19 = a2[2];
      if ( v8 >= v19 )
        v8 = v19 - 1;
      qmemcpy(v16, v17, v8);
      *((_BYTE *)v16 + v8) = 0;
    }
  }
  v20 = "dp";
  if ( v18 )
    v20 = "tp";
  return sub_608FDE40(a2, "_%04d_%02d%02d_%02d%02d%02d%s.tga", v32[0], v32[1], v32[2], v32[4], v32[5], v32[6], v20);
}
