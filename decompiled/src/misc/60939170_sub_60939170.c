/* sub_60939170
 * address: 0x60939170   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60939170(int a1)
{
  int v2; // r6
  int v3; // r0
  int v4; // r4
  _DWORD *v5; // r5

  v2 = 0;
  *(_DWORD *)a1 = off_60C5E2F4;
  v3 = a1 + 28;
  FIELD_U32(a1, 20) = 0;
  FIELD_U32(a1, 24) = 0;
  FIELD_U32(a1, 28) = v3;
  FIELD_U32(a1, 32) = v3;
  FIELD_U32(a1, 36) = 0;
  FIELD_U32(a1, 40) = a1 + 40;
  FIELD_U32(a1, 44) = a1 + 40;
  FIELD_U32(a1, 48) = 0;
  FIELD_U32(a1, 52) = 0;
  FIELD_U32(a1, 56) = 0;
  FIELD_U32(a1, 60) = 0;
  sub_608DEB0C((_DWORD *)(a1 + 52), 16, a1 + 64);
  do
  {
    v4 = a1 + v2;
    FIELD_U32(v4, 132) = a1 + v2 + 140;
    FIELD_U32(v4, 128) = &BufferedSafeStringBase_char_vtable_probably;
    v5 = (_DWORD *)(a1 + v2 + 128);
    v5[2] = 128;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)v5);
    v2 += 140;
    **(_BYTE **)(v4 + 132) = 0;
    *v5 = &off_60BD95A8;
  }
  while ( v2 != 17920 );
  FIELD_U16(a1, 18048) = 257;
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 18052));
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 18088));
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 18124));
  return a1;
}
