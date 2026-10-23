/* sub_606D25F0
 * address: 0x606D25F0   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D25F0(int a1)
{
  unsigned int v2; // r1
  int v3; // r0
  _DWORD *v4; // r5
  unsigned int v5; // r5
  int *v6; // r4
  int v7; // t1
  int result; // r0

  v2 = FIELD_U32(a1, 6180);
  if ( v2 )
  {
    v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
    if ( v3 )
    {
      v4 = (_DWORD *)(a1 + 6172);
LABEL_6:
      FIELD_U8(a1, 6186) = sub_606D4788(v3, *v4);
    }
  }
  else
  {
    v4 = (_DWORD *)(a1 + 6172);
    v3 = sub_606D4384((signed int *)(a1 + 6172), FIELD_U8(a1, 6187));
    if ( v3 )
    {
      FIELD_U32(a1, 6180) = FIELD_U32(v3, 8);
      goto LABEL_6;
    }
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 240))(a1);
  sub_606D26BC(a1);
  v5 = FIELD_U32(a1, 6156);
  v6 = *(int **)(a1 + 6152);
  do
  {
    v7 = *v6;
    v6 += 11;
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 28))(v7);
  }
  while ( (unsigned int)v6 < v5 );
  return result;
}
