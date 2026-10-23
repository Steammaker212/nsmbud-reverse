/* sub_60908B18
 * address: 0x60908B18   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60908B18(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v3; // r7
  nn__os *v4; // r6
  nn__os *v5; // r0
  int v6; // r7
  int v7; // r1
  int i; // r7

  v2 = a1 + 8;
  *a1 = off_60C5CEF8;
  sead__CriticalSection__lock((int)(a1 + 8));
  v3 = a1[6];
  v4 = (nn__os *)(a1 + 5);
  if ( (_DWORD *)v3 != a1 + 5 )
  {
    do
    {
      (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(v3 + 8) + 28))(FIELD_U32(v3, 8), 0);
      v3 = FIELD_U32(v3, 4);
    }
    while ( (nn__os *)v3 != v4 );
  }
  while ( 1 )
  {
    v5 = (nn__os *)a1[6];
    if ( v5 == v4 )
      break;
    LOBYTE(v6) = 1;
    do
    {
      v7 = *((_DWORD *)v5 + 2);
      v5 = *((nn__os **)v5 + 1);
      v6 = (unsigned __int8)v6 & ((unsigned int)(FIELD_U32(v7, 120) - 3) < 2);
    }
    while ( v5 != v4 );
    nn__os__YieldThread(v5);
    if ( v6 )
      goto LABEL_9;
  }
  nn__os__YieldThread(v5);
LABEL_9:
  for ( i = a1[6]; (nn__os *)i != v4; i = FIELD_U32(i, 4) )
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(i + 8) + 32))(FIELD_U32(i, 8));
  sead__ThreadMgr__sInstance = 0;
  sead__CriticalSection__unlock((int)v2);
  nn__os__FreeTlsSlot();
  sead__CriticalSection__dtor(v2);
  return a1;
}
