/* sub_601E858C
 * address: 0x601E858C   size: 1040   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601E858C()
{
  int (__fastcall ***v0)(_DWORD, int *); // r4
  char v1; // r12
  int v2; // r5
  int (__fastcall ****v3)(_DWORD, int *); // r10
  char v4; // r12
  int (__fastcall ***v5)(_DWORD, int *); // r4
  int v6; // r6
  int v7; // r4
  int *v8; // r8
  int *v9; // r9
  int (__fastcall ****v10)(_DWORD, int *); // r6
  int v11; // r0
  signed int v12; // r10
  bool v13; // cc
  const char *v14; // r4
  int i; // r1
  int (__fastcall ****v17)(_DWORD, int *); // [sp+14h] [bp-BCh]
  _DWORD *v18; // [sp+38h] [bp-98h]
  int (**v19)(); // [sp+3Ch] [bp-94h] BYREF
  const char *v20; // [sp+40h] [bp-90h]
  int (**v21)(); // [sp+44h] [bp-8Ch] BYREF
  int *v22; // [sp+48h] [bp-88h]
  int v23; // [sp+4Ch] [bp-84h]
  int v24; // [sp+50h] [bp-80h] BYREF
  _DWORD v25[30]; // [sp+58h] [bp-78h] BYREF

  v25[0] = 0;
  memset(&v25[2], 0, 72);
  sub_601905DC(v25);
  v25[0] = 65;
  v25[1] = sub_601916C8(dword_60C8996C, 65);
  v0 = *(int (__fastcall ****)(_DWORD, int *))sub_601693A0(864);
  if ( ((unsigned int)&dword_60C8A660 & ~(1612613112 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8A660) )
  {
    dword_60C8A65C = (int)&off_60BD4E08;
    _cxa_guard_release(&dword_60C8A660);
  }
  v2 = (int)(v0 + 2);
  if ( !(**v0)(v0, &dword_60C8A65C) )
    v2 = 8;
  v25[2] = *(_DWORD *)v2;
  v3 = (int (__fastcall ****)(_DWORD, int *))sub_601693A0(866);
  v17 = *(int (__fastcall *****)(_DWORD, int *))(ActorMgr__instance + 27180);
  while ( 1 )
  {
    v5 = *v3;
    if ( ((unsigned int)dword_60C88E88 & ~(1612613452 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60C88E88) )
    {
      dword_60C88E84 = (int)&off_60BD4E08;
      _cxa_guard_release(dword_60C88E88);
    }
    if ( v5 )
    {
      v6 = (**v5)(v5, &dword_60C88E84);
      if ( v6 )
        v6 = (int)v5;
    }
    else
    {
      v6 = 0;
    }
    v22 = &v24;
    v21 = &BufferedSafeStringBase_char_vtable_probably;
    v23 = 5;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v21);
    v18 = (_DWORD *)v6;
    v21 = &off_60BD5434;
    v7 = v6 + 332;
    v8 = v22;
    (*(void (__fastcall **)(int))(FIELD_U32(v6, 332) + 12))(v6 + 332);
    v9 = *(int **)(v6 + 336);
    if ( v8 != v9 )
    {
      v10 = v3;
      (*(void (__fastcall **)(int))(v18[83] + 12))(v7);
      v11 = v18[84];
      v12 = 0;
      while ( *(_BYTE *)(v11 + v12) )
      {
        if ( !*(_BYTE *)(v11 + v12 + 1) )
        {
          ++v12;
          break;
        }
        if ( !*(_BYTE *)(v11 + v12 + 2) )
        {
          v12 += 2;
          break;
        }
        v13 = v12 + 2 <= 0x7FFFF;
        v12 += 3;
        if ( !v13 )
        {
          v12 = 0;
          break;
        }
      }
      if ( v12 >= v23 )
        v12 = v23 - 1;
      qmemcpy(v8, v9, v12);
      *((_BYTE *)v8 + v12) = 0;
      v3 = v10;
    }
    v21 = &off_60BD4F38;
    v19 = &sead__SafeStringBase__vtable;
    v20 = "W8B1";
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v21);
    ((void (__fastcall *)(int (***)()))v21[3])(&v21);
    v14 = (const char *)v22;
    ((void (__fastcall *)(int (***)()))v19[3])(&v19);
    if ( v14 == v20 )
      break;
    for ( i = 1; *((unsigned __int8 *)v22 + i - 1) == (unsigned __int8)v20[i - 1]; i += 2 )
    {
      if ( !*((_BYTE *)v22 + i - 1) )
        goto LABEL_38;
      if ( i >= 524289 || *((unsigned __int8 *)v22 + i) != (unsigned __int8)v20[i] )
        break;
      if ( !*((_BYTE *)v22 + i) )
        goto LABEL_38;
    }
    v3 = (int (__fastcall ****)(_DWORD, int *))sub_601693C0(866, (int)(v3 + 1));
    if ( v3 == v17 )
      return sub_60191160((_DWORD *)dword_60C8996C, v25);
  }
LABEL_38:
  v25[5] = v18[2];
  return sub_60191160((_DWORD *)dword_60C8996C, v25);
}
