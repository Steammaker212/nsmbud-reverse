/* sub_608B62CC
 * address: 0x608B62CC   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B62CC(int a1, int a2, int a3)
{
  int v4; // r0
  int result; // r0
  int v6; // t1
  void *v7; // r5
  int v8; // r0
  char *v9; // r0
  int i; // r7
  char *v11; // r0

  v4 = a1 + 4 * a3;
  v6 = FIELD_U32(v4, 128);
  result = v4 + 128;
  if ( v6 != a2 )
  {
    *(_DWORD *)result = a2;
    v7 = sub_608C3B10();
    v8 = sub_608C2698(v7, 20, 1);
    FIELD_U32(v8, 4) = 77;
    FIELD_U32(v8, 16) = 8;
    sub_608C2C1C(v7);
    result = FIELD_U8(a1, 1400);
    if ( FIELD_U8(a1, 1400) )
    {
      v9 = (char *)sub_608065A0();
      nn__os__LockMutex(v9 + 1240);
      for ( i = FIELD_U32(a1, 1236); i != a1 + 1232; i = FIELD_U32(i, 4) )
        sub_608D0E8C(i - 36);
      v11 = (char *)sub_608065A0();
      nn__os__UnlockMutex(v11 + 1240);
      return sub_608D0E8C(a1 + 740);
    }
  }
  return result;
}
