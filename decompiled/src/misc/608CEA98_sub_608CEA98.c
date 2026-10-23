/* sub_608CEA98
 * address: 0x608CEA98   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608CEA98(int a1)
{
  unsigned __int64 v1; // r6
  char v2; // lr
  _BOOL4 v4; // r4
  char v5; // lr
  unsigned int v6; // r1
  char *v7; // r0
  char v8; // lr
  char v9; // lr
  unsigned int v10; // r1
  char *v11; // r0

  v4 = 0;
  if ( FIELD_U8(a1, 12) )
  {
    LODWORD(v1) = 1619847868 << v2;
    __clrex();
    sub_608065A0();
    __clrex();
    if ( v1 < __PAIR64__(v6, 1619847884 << v5) )
    {
      v7 = (char *)sub_608065A0();
      nn__os__LockMutex(v7 + 1408);
      v4 = 0;
      if ( nn__audio__IsReverbRemovable(a1 + 96) == 1 )
      {
        LODWORD(v1) = 1619847936 << v8;
        __clrex();
        sub_608065A0();
        __clrex();
        v4 = v1 < __PAIR64__(v10, 1619847956 << v9);
      }
      v11 = (char *)sub_608065A0();
      nn__os__UnlockMutex(v11 + 1408);
    }
  }
  return v4;
}
