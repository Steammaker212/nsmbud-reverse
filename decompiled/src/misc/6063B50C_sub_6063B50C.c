/* sub_6063B50C
 * address: 0x6063B50C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall sub_6063B50C(unsigned int a1, unsigned int a2)
{
  ModelWrapper *result; // r0
  int v5; // r7
  ModelWrapper *v6; // r6
  ModelWrapper *v7; // r6
  ModelWrapper *v8; // r6

  result = (ModelWrapper *)dword_60C9CF0C;
  v5 = FIELD_U8(dword_60C9CF0C, 1360);
  if ( v5 == 4 )
  {
    do
    {
      v7 = *(ModelWrapper **)(a1 + 4);
      if ( v7 )
      {
        sub_6041838C((ModelAnimation *)((char *)*FIELD_U32(v7, 0x18).animations + 4));
        result = ModelWrapper_updateAnims(v7);
      }
      a1 += 36;
    }
    while ( a1 < a2 );
  }
  else if ( v5 == 2 )
  {
    do
    {
      v6 = *(ModelWrapper **)(a1 + 4);
      if ( v6 )
      {
        sub_6041838C((ModelAnimation *)((char *)*FIELD_U32(v6, 0x18).animations + 4));
        result = ModelWrapper_updateAnims(v6);
      }
      a1 += 36;
    }
    while ( a1 < a2 );
  }
  else
  {
    do
    {
      v8 = *(ModelWrapper **)(a1 + 4);
      if ( v8 )
        result = ModelWrapper_updateAnims(v8);
      a1 += 36;
    }
    while ( a1 < a2 );
  }
  return result;
}
