#pragma once
#include "Renderable3DComponent.h"


class ForwardRenderableComponent :
	public Renderable3DComponent
{
protected:

	static wiRenderTarget rtMain;

	virtual void ResizeBuffers();

	virtual void RenderScene(GRAPHICSTHREAD threadID) override;
public:
	ForwardRenderableComponent();
	virtual ~ForwardRenderableComponent();

	virtual wiDepthTarget* GetDepthBuffer() override;

	virtual void Initialize() override;
	virtual void Load() override;
	virtual void Start() override;
	virtual void Render() override;
};

