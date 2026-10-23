/* BossBase__vf324
 * address: 0x60025DA0   size: 280   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall BossBase__vf324(_DWORD *a1, int a2)
{
  int v4; // r0
  void (__fastcall *v5)(_DWORD *, int); // r6
  int v6; // r0
  int v7; // r7
  int v8; // r0
  int (__fastcall *v9)(_DWORD *); // r1

  v4 = *a1;
  v5 = *(void (__fastcall **)(_DWORD *, int))(v4 + 732);
  v6 = (*(int (__fastcall **)(_DWORD *))(v4 + 740))(a1);
  v5(a1, v6);
  a1[1577] = (*(int (__fastcall **)(_DWORD *))(*a1 + 788))(a1);
  (*(void (__fastcall **)(_DWORD *))(*a1 + 768))(a1);
  v7 = a1[1575];
  (*(void (__fastcall **)(_DWORD *))(*a1 + 916))(a1);
  v8 = *a1;
  if ( v7 <= 0 )
  {
    (*(void (__fastcall **)(_DWORD *))(v8 + 912))(a1);
    (*(void (__fastcall **)(_DWORD *))(*a1 + 936))(a1);
    (*(void (__fastcall **)(_DWORD *))(*a1 + 980))(a1);
    a1[1575] = 0;
    (*(void (__fastcall **)(_DWORD *, int))(*a1 + 812))(a1, a2);
    (*(void (__fastcall **)(_DWORD *))(*a1 + 880))(a1);
    v9 = *(int (__fastcall **)(_DWORD *))(*a1 + 800);
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *))(v8 + 932))(a1);
    (*(void (__fastcall **)(_DWORD *, int))(*a1 + 808))(a1, a2);
    v9 = *(int (__fastcall **)(_DWORD *))(*a1 + 876);
  }
  return v9(a1);
}
