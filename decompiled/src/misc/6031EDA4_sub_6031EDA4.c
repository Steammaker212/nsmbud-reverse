/* sub_6031EDA4
 * address: 0x6031EDA4   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6031EDA4(_DWORD *a1)
{
  int v2; // r5
  int v3; // r6
  int v4; // r6
  int v5; // r5

  v2 = a1[1524];
  v3 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
  if ( v3 == (*(int (**)(void))(dword_60C93814 + 8))() )
    return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C9385C);
  v4 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
  if ( v4 == (*(int (**)(void))(dword_60C93838 + 8))() )
    return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C9385C);
  v5 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
  if ( v5 == (*(int (**)(void))(dword_60C9385C + 8))() )
    return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C9385C);
  else
    return sub_6031DEB0((int)a1);
}
