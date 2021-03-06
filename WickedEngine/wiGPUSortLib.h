#ifndef _WI_GPU_SORTLIB_H_
#define _WI_GPU_SORTLIB_H_

#include "CommonInclude.h"
#include "wiGraphicsAPI.h"

namespace wiGPUSortLib
{
	// Perform bitonic sort on a GPU dataset
	//	maxCount				-	Maximum size of the dataset. GPU count can be smaller (see: counterBuffer_read param)
	//	comparisonBuffer_read	-	Buffer containing values to compare by (Read Only)
	//	counterBuffer_read		-	Buffer containing count of values to sort (Read Only)
	//	counterReadOffset		-	Byte offset into the counter buffer to read the count value (Read Only)
	//	indexBuffer_write		-	The index list which to sort. Contains index values which can index the sortBase_read buffer. This will be modified (Read + Write)
	void Sort(UINT maxCount, wiGraphicsTypes::GPUBuffer* comparisonBuffer_read, wiGraphicsTypes::GPUBuffer* counterBuffer_read, UINT counterReadOffset, wiGraphicsTypes::GPUBuffer* indexBuffer_write, GRAPHICSTHREAD threadID);

	void Initialize();
	void LoadShaders();
	void CleanUp();
};

#endif // _WI_GPU_SORTLIB_H_
