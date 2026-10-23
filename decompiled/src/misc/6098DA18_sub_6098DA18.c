/* sub_6098DA18
 * address: 0x6098DA18   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6098DA18(int *r0_0, int a2, int a3, int a4)
{
  int v4; // r5
  int (__fastcall ***v8)(_DWORD, int *); // r4
  char v9; // r12
  sead_IDisposer a1; // [sp+4h] [bp-94h] BYREF
  int v13; // [sp+14h] [bp-84h]
  int v14; // [sp+18h] [bp-80h]
  sead_IDisposer *p_a1; // [sp+1Ch] [bp-7Ch]
  int v16; // [sp+20h] [bp-78h]
  int (**v17)(); // [sp+24h] [bp-74h] BYREF
  int *v18; // [sp+28h] [bp-70h]
  int v19; // [sp+2Ch] [bp-6Ch]
  int v20; // [sp+30h] [bp-68h] BYREF
  _DWORD v21[3]; // [sp+50h] [bp-48h] BYREF
  char v22; // [sp+5Ch] [bp-3Ch]
  sead_IDisposer *v23; // [sp+60h] [bp-38h]
  int (**v24)(); // [sp+64h] [bp-34h]
  char *v25; // [sp+68h] [bp-30h]
  int v26; // [sp+6Ch] [bp-2Ch]
  int v27; // [sp+70h] [bp-28h]

  v4 = 0;
  v22 = 0;
  v24 = &sead__SafeStringBase__vtable;
  v25 = &byte_60B3BA34;
  v27 = 32;
  a1.vtable = (int)off_60C5CB68;
  v13 = 0;
  v14 = 0;
  p_a1 = &a1;
  v16 = 0;
  sead_IDisposer_ctor(&a1);
  a1.vtable = (int)off_60C5CB68;
  v18 = &v20;
  v17 = &BufferedSafeStringBase_char_vtable_probably;
  v19 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v17);
  *(_BYTE *)v18 = 0;
  v21[0] = a3;
  v21[1] = a4;
  v21[2] = a4;
  v23 = &a1;
  v26 = a2;
  v17 = &off_60BD4C20;
  a1.vtable = (int)off_60BF9EF4;
  v8 = (int (__fastcall ***)(_DWORD, int *))sub_60902D24(sead__ResourceMgr__sInstance, v21);
  if ( ((unsigned int)&dword_60C9BB1C & ~(1620630296 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BB1C) )
  {
    dword_60C9BB18 = (int)&off_60BF9F34;
    _cxa_guard_release(&dword_60C9BB1C);
  }
  if ( v8 )
  {
    v4 = (**v8)(v8, &dword_60C9BB18);
    if ( v4 )
      v4 = (int)v8;
  }
  *r0_0 = v4;
  return sub_60902104(&a1);
}
