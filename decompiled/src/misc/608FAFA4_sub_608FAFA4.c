/* sub_608FAFA4
 * address: 0x608FAFA4   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608FAFA4(int a1, int a2, int a3, int a4, _DWORD *a5, int a6)
{
  int v6; // r4
  int v10; // r7
  bool v11; // zf
  _DWORD *CurrentHeap_const; // r9
  int v13; // r10
  int v14; // r0
  _DWORD *v15; // r6

  v6 = a4;
  v10 = 0;
  if ( a4 < 0 )
    v6 = -a4;
  v11 = a1 == 0;
  if ( a1 )
    v11 = a2 == 0;
  if ( !v11 )
  {
    if ( v6 <= 4 )
      v6 = 4;
    if ( ((v6 + 0x7FFFFFFF) & v6) == 0 )
    {
      CurrentHeap_const = a5;
      if ( a5 || (CurrentHeap_const = (_DWORD *)sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance)) != 0 )
      {
        v13 = v6 + ((a1 + v6 - 1) & -v6) * a2 + 148;
        v14 = (*(int (__fastcall **)(_DWORD *, int, int))(*CurrentHeap_const + 24))(CurrentHeap_const, v13, 4);
        v15 = (_DWORD *)v14;
        if ( v14 )
        {
          sead__Heap__ctor(v14, a3, CurrentHeap_const, v14, v13, 1, a6);
          *v15 = off_60C5CA84;
          v15[6] = off_60C5CAF8;
          v15[31] = a1;
          v15[32] = 0;
          v15[33] = 0;
          v15[34] = 0;
          v15[35] = 0;
          v15[36] = 0;
          sub_608FAE64((int)v15, v6, 1, (int)CurrentHeap_const);
          return v15;
        }
      }
    }
  }
  return (_DWORD *)v10;
}
