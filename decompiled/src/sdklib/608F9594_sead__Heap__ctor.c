/* sead__Heap__ctor
 * address: 0x608F9594   size: 332   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sead__Heap__ctor(int a1, int a2, _DWORD *a3, int a4, int a5, int a6, int a7)
{
  unsigned int v11; // r3
  __int16 v12; // r2

  sead__IDisposer__ctor((_DWORD *)a1, a3, 1u);
  FIELD_U32(a1, 16) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 20) = FIELD_U32(a2, 4);
  *(_DWORD *)a1 = off_60C5C9F0;
  FIELD_U32(a1, 24) = &off_60C5CA64;
  FIELD_U32(a1, 28) = a4;
  FIELD_U32(a1, 32) = a5;
  FIELD_U32(a1, 36) = a3;
  FIELD_U32(a1, 48) = 0;
  FIELD_U32(a1, 44) = a1 + 40;
  FIELD_U32(a1, 40) = a1 + 40;
  FIELD_U32(a1, 52) = -1;
  FIELD_U32(a1, 56) = 0;
  FIELD_U32(a1, 60) = 0;
  FIELD_U32(a1, 72) = 0;
  FIELD_U32(a1, 68) = a1 + 64;
  FIELD_U32(a1, 64) = a1 + 64;
  FIELD_U32(a1, 76) = -1;
  FIELD_U32(a1, 80) = a6;
  sub_60907EEC(a1 + 84, a3);
  FIELD_U16(a1, 120) = 4;
  do
  {
    do
      v11 = __ldrex((unsigned int *)&dword_60CCEF00);
    while ( __strex(v11 + 1, (unsigned int *)&dword_60CCEF00) );
  }
  while ( (unsigned __int16)v11 == 0xFFFF );
  FIELD_U16(a1, 122) = v11;
  v12 = FIELD_U16(a1, 120) & 0xFFFE;
  if ( a7 )
    v12 = FIELD_U16(a1, 120) | 1;
  FIELD_U16(a1, 120) = v12;
  if ( (v12 & 1) != 0 )
  {
    sead__CriticalSection__lock(a1 + 84);
    FIELD_U32(a1, 52) = 56;
    FIELD_U32(a1, 76) = 8;
    sead__CriticalSection__unlock(a1 + 84);
  }
  else
  {
    FIELD_U32(a1, 52) = 56;
    FIELD_U32(a1, 76) = 8;
  }
  return a1;
}
