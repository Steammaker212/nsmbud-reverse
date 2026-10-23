/* sub_608D2C08
 * address: 0x608D2C08   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D2C08(_DWORD *a1, const void *a2)
{
  _DWORD *v4; // r8
  char v5; // r12
  _DWORD *i; // r7
  int v7; // r1
  int v8; // r0
  char v9; // lr

  v4 = a1 + 2;
  nn__os__LockMutex(a1 + 2);
  for ( i = (_DWORD *)a1[1]; i != a1; i = (_DWORD *)i[1] )
  {
    if ( (signed int)((unsigned int)(i + 7) | (1619864636 << v5)) < i[4] )
    {
      v7 = i[5];
      v8 = i[3];
      i[5] = v7 + 1;
      qmemcpy((void *)(v8 + 72 * v7), a2, 0x48u);
      if ( i[5] == i[4] )
        i[5] = 0;
      while ( (unsigned int)(i + 7) | ((((unsigned int)(i + 7) | (1619864704 << v9)) + 1) << v9) )
        ;
    }
  }
  return nn__os__UnlockMutex(v4);
}
