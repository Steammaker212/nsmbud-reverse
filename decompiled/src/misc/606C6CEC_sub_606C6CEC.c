/* sub_606C6CEC
 * address: 0x606C6CEC   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C6CEC(int a1)
{
  _WORD *v2; // r0
  __int16 v3; // r1
  int v4; // t1
  unsigned int v5; // r1
  unsigned int v6; // r2
  unsigned int v8[3]; // [sp+4h] [bp-4Ch] BYREF
  _BYTE v9[64]; // [sp+10h] [bp-40h] BYREF

  v4 = FIELD_U16(a1, 6336);
  v2 = (_WORD *)(a1 + 6336);
  v3 = v4;
  if ( v4 )
    *v2 = v3 - 1;
  StateMgr__execute((StateMgr *)(a1 + 6084));
  v5 = FIELD_U32(a1, 160);
  v6 = FIELD_U32(a1, 164);
  v8[0] = FIELD_U32(a1, 156);
  v8[1] = v5;
  v8[2] = v6;
  sub_601927EC((int)v9, (float *)(a1 + 144), v8, (_DWORD *)(a1 + 108));
  (*(void (__fastcall **)(_DWORD, _BYTE *))(***(_DWORD ***)(a1 + 6328) + 60))(**(_DWORD **)(a1 + 6328), v9);
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 6328));
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 204))(a1);
  return 1;
}
