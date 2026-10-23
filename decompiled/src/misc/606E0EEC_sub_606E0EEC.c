/* sub_606E0EEC
 * address: 0x606E0EEC   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall sub_606E0EEC(int a1)
{
  int v2; // r1
  bool v3; // zf
  __int16 v4; // r1
  ModelWrapper **v5; // r5

  if ( !FIELD_U32(a1, 6908) && FIELD_U32(a1, 6932) )
    JUMPOUT(0x6000100C);
  v2 = FIELD_U16(a1, 6956);
  v3 = v2 == 0;
  if ( FIELD_U16(a1, 6956) )
  {
    v4 = v2 - 1;
    FIELD_U16(a1, 6956) = v4;
    v3 = v4 == 0;
  }
  if ( v3 )
  {
    v5 = (ModelWrapper **)(a1 + 6104);
    if ( (*(_BYTE *)(**(_DWORD **)(FIELD_U32(a1, 6104) + 12) + 28) & 0x20) != 0 )
    {
      if ( FIELD_U32(a1, 6928) )
      {
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBBE34);
      }
      else if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 236))(a1) == 1 )
      {
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBBE54);
      }
      else
      {
        StageActor__delete((StateActor *)a1, 1);
      }
    }
  }
  else
  {
    v5 = (ModelWrapper **)(a1 + 6104);
  }
  return ModelWrapper_updateAnims(*v5);
}
