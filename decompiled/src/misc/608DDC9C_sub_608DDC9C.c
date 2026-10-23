/* sub_608DDC9C
 * address: 0x608DDC9C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DDC9C(_DWORD *a1)
{
  _DWORD *v1; // r6
  _DWORD *v2; // r7
  int v4; // r8
  int v5; // r0
  bool v6; // zf
  int v7; // r5
  void (__fastcall ***v8)(_DWORD); // r0

  v4 = (int)(a1 + 36);
  sead__CriticalSection__lock((int)(a1 + 36));
  v5 = a1[34];
  v6 = v5 == 0;
  if ( v5 )
  {
    v2 = (_DWORD *)a1[33];
    v1 = a1 + 32;
    v6 = v2 == a1 + 32;
  }
  if ( !v6 )
  {
    v7 = a1[35];
    v8 = (void (__fastcall ***)(_DWORD))((char *)v2 - v7);
    do
    {
      (**v8)(v8);
      v2 = (_DWORD *)v2[1];
      v8 = (void (__fastcall ***)(_DWORD))((char *)v2 - v7);
    }
    while ( (char *)v2 - v7 != (char *)v1 - a1[35] );
  }
  return sead__CriticalSection__unlock(v4);
}
