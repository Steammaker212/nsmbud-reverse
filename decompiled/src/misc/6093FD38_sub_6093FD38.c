/* sub_6093FD38
 * address: 0x6093FD38   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6093FD38(int a1, int a2, float *a3, int a4, int a5, int a6, float *a7, float *a8)
{
  int v12; // r7
  unsigned int v13; // r2
  _DWORD *v14; // r0
  _DWORD *v15; // r1
  _DWORD *v16; // r1

  v12 = 0;
  if ( FIELD_U32(dword_60CD0B60, 20) >= 0x32u )
    v12 = *(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 196);
  sub_6091DD8C(v12, a1);
  v13 = FIELD_U32(v12, 608);
  v14 = *(_DWORD **)(v12 + 612);
  v15 = v14;
  if ( v13 > 0xC )
    v15 = v14 + 36;
  if ( *v15 != -1 )
  {
    sub_6091B890(v15, a1, 2, a4);
    v13 = FIELD_U32(v12, 608);
    v14 = *(_DWORD **)(v12 + 612);
  }
  v16 = v14;
  if ( v13 > 0xD )
    v16 = v14 + 39;
  if ( *v16 != -1 )
  {
    sub_6091B890(v16, a1, 2, a5);
    v13 = FIELD_U32(v12, 608);
    v14 = *(_DWORD **)(v12 + 612);
  }
  if ( v13 > 0xE )
    v14 += 42;
  if ( *v14 != -1 )
    sub_6091B890(v14, a1, 2, a6);
  sub_6093F284(a1, v12, a2, a3, a7, a8);
}
