/* sub_601D22F8
 * address: 0x601D22F8   size: 1104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D22F8(int a1)
{
  int (__fastcall ***v1)(_DWORD, int *); // r4
  char v2; // r12
  int v3; // r5
  _DWORD **v4; // r6
  char v5; // r12
  int (***v6)(); // r11
  _DWORD *v7; // r4
  _DWORD *v8; // r8
  char *v9; // r10
  char *v10; // r9
  int (***v11)(); // r7
  int v12; // r0
  signed int v13; // r11
  bool v14; // cc
  char *v15; // r1
  const char *v16; // r4
  int i; // r1
  int v18; // r0
  int v20; // [sp+1Ch] [bp-BCh]
  _DWORD **v21; // [sp+3Ch] [bp-9Ch]
  int (**v22)(); // [sp+44h] [bp-94h] BYREF
  const char *v23; // [sp+48h] [bp-90h]
  int (**v24)(); // [sp+4Ch] [bp-8Ch] BYREF
  char *v25; // [sp+50h] [bp-88h]
  int v26; // [sp+54h] [bp-84h]
  int v27; // [sp+58h] [bp-80h] BYREF
  _DWORD v28[30]; // [sp+60h] [bp-78h] BYREF

  sub_601D99F8(a1, FIELD_U32(a1, 1032), 36);
  v28[0] = 0;
  memset(&v28[2], 0, 72);
  sub_601905DC(v28);
  v28[0] = 62;
  v28[1] = sub_601916C8(dword_60C8996C, 62);
  v1 = *(int (__fastcall ****)(_DWORD, int *))sub_601693A0(878);
  if ( ((unsigned int)&dword_60C8AF50 & ~(1612522352 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8AF50) )
  {
    dword_60C8AF4C = (int)&off_60BD6B64;
    _cxa_guard_release(&dword_60C8AF50);
  }
  v3 = (int)(v1 + 2);
  if ( !(**v1)(v1, &dword_60C8AF4C) )
    v3 = 8;
  v28[4] = *(_DWORD *)v3;
  v4 = (_DWORD **)sub_601693A0(866);
  v6 = &v24;
  v21 = *(_DWORD ***)(ActorMgr__instance + 27180);
  v20 = 0;
  do
  {
    v7 = *v4;
    if ( ((unsigned int)dword_60C88E88 & ~(1612522716 << v5) & 1) == 0 && _cxa_guard_acquire(dword_60C88E88) )
    {
      dword_60C88E84 = (int)&off_60BD4E08;
      _cxa_guard_release(dword_60C88E88);
    }
    if ( v7 )
    {
      v8 = (_DWORD *)(*(int (__fastcall **)(_DWORD *, int *))*v7)(v7, &dword_60C88E84);
      if ( v8 )
        v8 = v7;
    }
    else
    {
      v8 = 0;
    }
    v25 = (char *)&v27;
    v24 = &BufferedSafeStringBase_char_vtable_probably;
    v26 = 5;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)v6);
    v24 = &off_60BD5434;
    v9 = v25;
    (*(void (__fastcall **)(_DWORD *))(v8[83] + 12))(v8 + 83);
    v10 = (char *)v8[84];
    if ( v9 != v10 )
    {
      v11 = v6;
      (*(void (__fastcall **)(_DWORD *))(v8[83] + 12))(v8 + 83);
      v12 = v8[84];
      v13 = 0;
      while ( *(_BYTE *)(v12 + v13) )
      {
        if ( !*(_BYTE *)(v12 + v13 + 1) )
        {
          ++v13;
          break;
        }
        if ( !*(_BYTE *)(v12 + v13 + 2) )
        {
          v13 += 2;
          break;
        }
        v14 = v13 + 2 <= 0x7FFFF;
        v13 += 3;
        if ( !v14 )
        {
          v13 = 0;
          break;
        }
      }
      if ( v13 >= v26 )
        v13 = v26 - 1;
      qmemcpy(v9, v10, v13);
      v9[v13] = 0;
      v6 = v11;
    }
    v24 = &off_60BD4F38;
    v15 = &byte_60B3BA34;
    if ( v26 > 1 )
      v15 = v25 + 1;
    if ( *v15 == 55 )
    {
      v22 = &sead__SafeStringBase__vtable;
      v23 = "W7A0";
      sead__BufferedSafeStringBase__assureTerminationImpl_const((int)v6);
      ((void (__fastcall *)(int (***)()))v24[3])(v6);
      v16 = v25;
      ((void (__fastcall *)(int (***)()))v22[3])(&v22);
      if ( v16 == v23 )
      {
LABEL_38:
        v18 = v20 + 3;
        if ( (unsigned int)(v20 + 3) >= 0x12 )
          v18 = 0;
        ++v20;
        v28[v18 + 2] = v8[2];
      }
      else
      {
        for ( i = 1; v25[i - 1] == v23[i - 1]; i += 2 )
        {
          if ( !v25[i - 1] )
            goto LABEL_38;
          if ( i >= 524289 || v25[i] != v23[i] )
            break;
          if ( !v25[i] )
            goto LABEL_38;
        }
      }
    }
    v4 = (_DWORD **)sub_601693C0(866, (int)(v4 + 1));
  }
  while ( v4 != v21 );
  return sub_60191160((_DWORD *)dword_60C8996C, v28);
}
