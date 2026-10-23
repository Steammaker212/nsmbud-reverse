/* sub_608F882C
 * address: 0x608F882C   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F882C(int a1, int a2, _DWORD *a3, int a4, int a5, int a6)
{
  _DWORD *CurrentHeap_const; // r4
  int v10; // r6
  unsigned int v11; // r6
  int v12; // r5
  unsigned int v13; // r0
  int v14; // r9
  int v15; // r7
  int v16; // r6
  int v17; // r0
  bool v18; // zf
  int v19; // r1
  int v20; // r1

  CurrentHeap_const = a3;
  if ( !a3 )
  {
    CurrentHeap_const = (_DWORD *)sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
    if ( !CurrentHeap_const )
      return 0;
  }
  if ( a1 )
    v10 = a1 + 3;
  else
    v10 = (*(int (__fastcall **)(_DWORD *, int))(*CurrentHeap_const + 64))(CurrentHeap_const, a4);
  v11 = v10 & 0xFFFFFFFC;
  v12 = 0;
  if ( v11 >= 0x84 )
  {
    v13 = abs32(a4);
    if ( ((v13 - 1) & v13) == 0 )
    {
      v14 = a5;
      v15 = (*(int (__fastcall **)(_DWORD *, unsigned int, int))(*CurrentHeap_const + 24))(
              CurrentHeap_const,
              v11,
              a5 * a4);
      if ( v15 )
      {
        if ( CurrentHeap_const[20] == -1 )
          v14 = -a5;
        if ( v14 == 1 )
        {
          sead__Heap__ctor(v15, a2, CurrentHeap_const, v15, v11, 1, a6);
          v12 = v15;
        }
        else
        {
          v12 = v11 + v15 - 132;
          sead__Heap__ctor(v12, a2, CurrentHeap_const, v15, v11, v14, a6);
        }
        v16 = 0;
        *(_DWORD *)v12 = off_60C5C970;
        FIELD_U32(v12, 24) = &off_60C5C9E4;
        FIELD_U32(v12, 124) = 0;
        FIELD_U32(v12, 128) = 0;
        if ( (FIELD_U8(v12, 120) & 1) != 0 )
        {
          v16 = v12 + 84;
          sead__CriticalSection__lock(v12 + 84);
        }
        v17 = FIELD_U32(v12, 28);
        v18 = FIELD_U32(v12, 80) == 1;
        v19 = v17;
        if ( FIELD_U32(v12, 80) == 1 )
          v19 = v17 + 132;
        FIELD_U32(v12, 124) = v19;
        v20 = FIELD_U32(v12, 32);
        if ( !v18 )
          v20 -= 132;
        FIELD_U32(v12, 128) = v20 + v17;
        if ( v16 )
          sead__CriticalSection__unlock(v16);
        (*(void (__fastcall **)(_DWORD *, int))(*CurrentHeap_const + 104))(CurrentHeap_const, v12);
      }
    }
  }
  return v12;
}
