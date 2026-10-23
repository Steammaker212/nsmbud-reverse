/* sub_601EA530
 * address: 0x601EA530   size: 924   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601EA530()
{
  int v0; // r5
  int v1; // r0
  bool v2; // zf
  int v3; // r1
  _DWORD **v4; // r5
  char v5; // r12
  _DWORD *v6; // r4
  _DWORD *v7; // r7
  char *v8; // r8
  char *v9; // r9
  int v10; // r0
  signed int v11; // r10
  bool v12; // cc
  const char *v13; // r4
  char *v14; // r1
  int v16; // [sp+18h] [bp-C0h]
  _DWORD **v17; // [sp+20h] [bp-B8h]
  int (**v18)(); // [sp+44h] [bp-94h] BYREF
  const char *v19; // [sp+48h] [bp-90h]
  int (**v20)(); // [sp+4Ch] [bp-8Ch] BYREF
  char *v21; // [sp+50h] [bp-88h]
  int v22; // [sp+54h] [bp-84h]
  int v23; // [sp+58h] [bp-80h] BYREF
  int v24[30]; // [sp+60h] [bp-78h] BYREF

  v0 = dword_60CC6D78;
  v24[0] = 0;
  memset(&v24[2], 0, 72);
  sub_601905DC(v24);
  v1 = FIELD_U32(v0, 412);
  v2 = v1 == 8;
  if ( v1 == 8 )
    v2 = FIELD_U32(v0, 424) == 8;
  if ( v2 )
  {
    v24[0] = 108;
  }
  else
  {
    v24[0] = 105;
    if ( (FIELD_U8(v0, 2092) & 1) != 0 )
    {
      v3 = 106;
      if ( v1 == 8 )
        v3 = 107;
      v24[0] = v3;
      v16 = FIELD_U32(v0, 428);
      v4 = (_DWORD **)sub_601693A0(866);
      v17 = *(_DWORD ***)(ActorMgr__instance + 27180);
      while ( 1 )
      {
        v6 = *v4;
        if ( ((unsigned int)dword_60C88E88 & ~(1612621472 << v5) & 1) == 0 && _cxa_guard_acquire(dword_60C88E88) )
        {
          dword_60C88E84 = (int)&off_60BD4E08;
          _cxa_guard_release(dword_60C88E88);
        }
        if ( v6 )
        {
          v7 = (_DWORD *)(*(int (__fastcall **)(_DWORD *, int *))*v6)(v6, &dword_60C88E84);
          if ( v7 )
            v7 = v6;
        }
        else
        {
          v7 = 0;
        }
        v21 = (char *)&v23;
        v20 = &BufferedSafeStringBase_char_vtable_probably;
        v22 = 5;
        sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v20);
        v20 = &off_60BD5434;
        v8 = v21;
        (*(void (__fastcall **)(_DWORD *))(v7[83] + 12))(v7 + 83);
        v9 = (char *)v7[84];
        if ( v8 != v9 )
        {
          (*(void (__fastcall **)(_DWORD *))(v7[83] + 12))(v7 + 83);
          v10 = v7[84];
          v11 = 0;
          while ( *(_BYTE *)(v10 + v11) )
          {
            if ( !*(_BYTE *)(v10 + v11 + 1) )
            {
              ++v11;
              break;
            }
            if ( !*(_BYTE *)(v10 + v11 + 2) )
            {
              v11 += 2;
              break;
            }
            v12 = v11 + 2 < 0x80000;
            v11 += 3;
            if ( !v12 )
            {
              v11 = 0;
              break;
            }
          }
          if ( v11 >= v22 )
            v11 = v22 - 1;
          qmemcpy(v8, v9, v11);
          v8[v11] = 0;
        }
        v20 = &off_60BD4F38;
        v18 = &sead__SafeStringBase__vtable;
        v19 = "W9";
        sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v20);
        ((void (__fastcall *)(int (***)()))v20[3])(&v20);
        v13 = v21;
        ((void (__fastcall *)(int (***)()))v18[3])(&v18);
        if ( v13 == v19 || *v21 == *v19 && (!*v21 || v21[1] == v19[1]) )
        {
          v14 = &byte_60B3BA34;
          if ( v22 > 3 )
            v14 = v21 + 3;
          if ( (unsigned __int8)*v14 - 49 == v16 )
            break;
        }
        v4 = (_DWORD **)sub_601693C0(866, (int)(v4 + 1));
        if ( v4 == v17 )
          goto LABEL_39;
      }
      v24[5] = v7[2];
    }
  }
LABEL_39:
  v24[1] = sub_601916C8(dword_60C8996C, v24[0]);
  return sub_60191160((_DWORD *)dword_60C8996C, v24);
}
